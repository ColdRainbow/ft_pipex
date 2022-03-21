/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 01:39:57 by jkate             #+#    #+#             */
/*   Updated: 2020/11/05 21:12:34 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *source, size_t size)
{
	size_t	d;
	size_t	a;

	a = 0;
	d = ft_strlen(dest);
	if (size == 0 || d >= size)
		return (ft_strlen(source) + size);
	while (source[a] != '\0' && ((d + a) < size - 1))
	{
		dest[d + a] = source[a];
		a++;
	}
	dest[d + a] = '\0';
	return (ft_strlen(source) + d);
}
