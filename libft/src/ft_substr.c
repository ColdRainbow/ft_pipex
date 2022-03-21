/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 23:48:28 by jkate             #+#    #+#             */
/*   Updated: 2020/11/16 21:30:48 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	a;

	a = 0;
	if (!s)
		return (NULL);
	if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	res = (char *)malloc((len + 1));
	if (!res)
		return (NULL);
	while (a < len && ft_strlen(s) > a + start)
	{
		res[a] = s[a + start];
		a++;
	}
	res[a] = '\0';
	return (res);
}
