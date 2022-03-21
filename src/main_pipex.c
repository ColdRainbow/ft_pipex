#include "pipex.h"

// 1. потомок закрывает fd_pipe[0], он тут не используется
// 2. так как при вызове execve она свой результат будет выдавать
// в 1 стандартный поток вывода, нужно это исправить,
// чтобы данные передавались по нами созданному каналу(!!!)
// т.о., посылаем все не в стандартный поток ввода, а в наш (fd_pipe[1])
// для этого переоткрываем стандартный поток вывода
// 3. открываем файлик, из которого будем брать информацию
// 4. теперь нужно переоткрыть 0 канал
// чтобы данные брались из файла, который мы открыли

static	void	first_child(char *av[], char *env[], int fd_pipe[2])
{
	int		fd_in;
	char	**program_av;

	close(fd_pipe[0]);
	dup2(fd_pipe[1], STDOUT_FILENO);
	close(fd_pipe[1]);
	fd_in = open(av[1], O_RDONLY);
	if (fd_in == -1)
		error_exit("open");
	dup2(fd_in, STDIN_FILENO);
	close(fd_in);
	program_av = path_search(av[2], env);
	if (program_av)
	{
		execve(program_av[0], program_av, env);
		perror(program_av[0]);
	}
	else
	{
		ft_putstr_fd("No such command: ", STDERR_FILENO);
		ft_putstr_fd(av[2], STDERR_FILENO);
		ft_putstr_fd("\n", STDERR_FILENO);
	}
	exit(EXIT_FAILURE);
}

static	void	second_child(char *av[], char *env[], int fd_pipe[2])
{
	int		fd_out;
	char	**program_av;

	fd_out = open(av[4], O_CREAT | O_WRONLY | O_TRUNC, S_IRWXU);
	if (fd_out == -1)
		error_exit("open");
	close(fd_pipe[1]);
	dup2(fd_pipe[0], STDIN_FILENO);
	close(fd_pipe[0]);
	dup2(fd_out, STDOUT_FILENO);
	close(fd_out);
	program_av = path_search(av[3], env);
	if (program_av)
	{
		execve(program_av[0], program_av, env);
		perror(program_av[0]);
	}
	else
	{
		ft_putstr_fd("No such command: ", STDERR_FILENO);
		ft_putstr_fd(av[3], STDERR_FILENO);
		ft_putstr_fd("\n", STDERR_FILENO);
	}
	exit(EXIT_FAILURE);
}

int	main(int ac, char *av[], char *env[])
{
	int		pid[2];
	int		fd_pipe[2];

	if (ac != ARG_COUNT)
	{
		ft_putstr_fd("Usage: ", STDERR_FILENO);
		ft_putstr_fd(av[0], STDERR_FILENO);
		ft_putstr_fd(" [from_file] [cmd] [cmd] [to_file]\n", STDERR_FILENO);
		error_exit(NULL);
	}
	if (pipe(fd_pipe) == -1)
		error_exit("pipe: ");
	pid[0] = fork_create();
	if (pid[0] == 0)
		first_child(av, env, fd_pipe);
	pid[1] = fork_create();
	if (pid[1] == 0)
		second_child(av, env, fd_pipe);
	close(fd_pipe[0]);
	close(fd_pipe[1]);
	wait(NULL);
	wait(NULL);
	return (0);
}
