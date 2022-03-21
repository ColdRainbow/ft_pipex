/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:03:54 by jkate             #+#    #+#             */
/*   Updated: 2020/11/02 22:21:32 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *source, int ch, size_t count)
{
	size_t	a;

	a = 0;
	while (a < count)
	{
		((unsigned char *)dest)[a] = ((unsigned char *)source)[a];
		if (((unsigned char *)source)[a] == (unsigned char)ch)
			return (dest + a + 1);
		a++;
	}
	return (NULL);
}
