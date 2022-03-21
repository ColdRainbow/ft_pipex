/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:45:40 by jkate             #+#    #+#             */
/*   Updated: 2020/11/13 19:48:38 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;
	size_t	b;
	char	*res;

	if (!s1)
		return (NULL);
	a = 0;
	b = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[a]) && s1[a])
		a++;
	while (ft_strchr(set, s1[b]) && (b - a + 1))
		b--;
	res = (char *)ft_calloc(b - a + 2, 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1 + a, b - a + 1);
	return (res);
}
