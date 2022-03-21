#include "pipex.h"

// разбили на команду и аргументы, добавили '/' перед командой
// пример char *av = ["wc -l", NULL]
// стало ["/wc", "-l", NULL]
// храним все в program_av
static	char	**path_search_extra_make_args(char *av)
{
	char	**program_av;
	char	*tmp;

	program_av = ft_split(av, ' ');
	if (!program_av)
		error_exit("ft_split");
	tmp = ft_strjoin("/", program_av[0]);
	if (!tmp)
		error_exit("ft_strjoin");
	free(program_av[0]);
	program_av[0] = tmp;
	return (program_av);
}

static char	**path_search_extra(char *av, char *path_splited[])
{
	char	**program_av;
	char	*tmp;
	int		i;

	i = 0;
	program_av = path_search_extra_make_args(av);
	while (path_splited[i])
	{
		tmp = ft_strjoin(path_splited[i], program_av[0]);
		if (!tmp)
			error_exit("ft_strjoin");
		if (access(tmp, F_OK) == 0)
		{
			free(program_av[0]);
			program_av[0] = tmp;
			return (program_av);
		}
		free(tmp);
		i++;
	}
	free_arr(&program_av);
	return (NULL);
}

static	char	**path_search_is_relational_path(char *av)
{
	char	**program_av;

	program_av = NULL;
	if (strchr(av, '/'))
	{
		program_av = ft_split(av, ' ');
		if (!program_av)
			error_exit("ft_split");
	}
	return (program_av);
}

char	**path_search(char *av, char *env[])
{
	int		i;
	char	**path_splited;
	char	**program_av;

	i = 0;
	path_splited = NULL;
	program_av = path_search_is_relational_path(av);
	if (!program_av)
	{
		while (env[i])
		{
			if (ft_strnstr(env[i], "PATH=", sizeof("PATH=") - 1))
			{
				path_splited = ft_split(env[i] + sizeof("PATH=") - 1, ':');
				if (!path_splited)
					error_exit("ft_split");
				program_av = path_search_extra(av, path_splited);
				break ;
			}
			i++;
		}
		if (path_splited)
			free_arr(&path_splited);
	}
	return (program_av);
}
