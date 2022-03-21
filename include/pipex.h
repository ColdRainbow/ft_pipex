#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/wait.h>
# include <sys/stat.h>
# include <stdio.h>
# include "libft.h"

# define ARG_COUNT 5

char	**path_search(char *av, char *env[]);
void	error_exit(const char *msg);
int		fork_create(void);

void	free_arr(char ***arr);
size_t	ft_strlen(const char *str);
char	**ft_split(char const *s, char c);
char	*ft_strnstr(const char *source, const char *find, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
