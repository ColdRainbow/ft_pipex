/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:18:12 by jkate             #+#    #+#             */
/*   Updated: 2020/11/13 18:48:48 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	a;
	size_t	b;
	char	*res;

	a = 0;
	b = 0;
	if (!s1 || !s2)
		return (NULL);
	res = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	while (s1[a] != '\0')
	{
		res[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		res[a] = s2[b];
		a++;
		b++;
	}
	res[a] = '\0';
	return (res);
}
