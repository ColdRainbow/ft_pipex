#include "pipex.h"

void	error_exit(const char *msg)
{
	if (msg)
		perror(msg);
	exit(EXIT_FAILURE);
}

int	fork_create(void)
{
	int	pid;

	pid = fork();
	if (pid == -1)
		error_exit("fork: ");
	return (pid);
}
