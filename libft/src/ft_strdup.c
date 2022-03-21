/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:42:32 by jkate             #+#    #+#             */
/*   Updated: 2020/11/05 23:48:17 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*answer;
	int		a;

	a = 0;
	answer = malloc(ft_strlen(str) + 1);
	if (answer == 0)
		return (NULL);
	while (str[a] != '\0')
	{
		answer[a] = str[a];
		a++;
	}
	answer[a] = '\0';
	return (answer);
}
