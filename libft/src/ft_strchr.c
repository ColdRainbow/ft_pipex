/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:23:24 by jkate             #+#    #+#             */
/*   Updated: 2020/10/31 21:32:03 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	int		a;
	char	*res;

	a = 0;
	res = (char *)str;
	while (str[a] != ch)
	{
		if (str[a] == '\0')
			return (NULL);
		a++;
	}
	return (res + a);
}
