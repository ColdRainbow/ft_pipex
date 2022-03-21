#include "libft.h"

int	ft_realloc(char **line, long int current_size, long int needed_size)
{
	char		*temp;
	long int	i;

	i = 0;
	temp = (char *)ft_calloc((current_size + needed_size), 1);
	if (!temp)
		return (-1);
	while (i < current_size)
	{
		temp[i] = (*line)[i];
		i++;
	}
	temp[i] = '\0';
	free(*line);
	*line = temp;
	return (1);
}
