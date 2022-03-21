/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrch.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:22:07 by jkate             #+#    #+#             */
/*   Updated: 2020/11/03 01:04:20 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		a;
	char	*res;

	a = ft_strlen(str) - 1;
	if ((char)ch == '\0')
		return ((char *)str + a + 1);
	while (a + 1)
	{
		if (str[a] == ch)
		{
			res = (char *)str;
			return (res + a);
		}
		a--;
	}
	return (NULL);
}
