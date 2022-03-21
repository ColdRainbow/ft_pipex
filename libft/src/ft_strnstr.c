/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 19:03:53 by jkate             #+#    #+#             */
/*   Updated: 2020/11/01 00:15:09 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	if (!needle)
		return ((char *)haystack);
	k = 0;
	while (haystack && haystack[k] && k < len)
	{
		i = 0;
		while (needle[i] && haystack[k + i] \
			&& needle[i] == haystack[k + i] && k + i < len)
			i++;
		if (!needle[i])
			return ((char *)&haystack[k]);
		k++;
	}
	return (NULL);
}
