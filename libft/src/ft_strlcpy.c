/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 19:04:51 by jkate             #+#    #+#             */
/*   Updated: 2020/11/04 01:33:21 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *source, size_t size)
{
	size_t	a;
	size_t	r;

	a = 0;
	r = 0;
	if (!dest || !source)
		return (0);
	while (source[r] != '\0')
		r++;
	if (size == 0)
		return (r);
	while (a < size - 1 && source[a] != '\0')
	{
		((unsigned char *)dest)[a] = ((unsigned char *)source)[a];
		a++;
	}
	dest[a] = '\0';
	return (r);
}
