/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:39:04 by jkate             #+#    #+#             */
/*   Updated: 2020/11/02 22:15:57 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t count)
{
	size_t	a;

	a = 0;
	if (count == 0 || dest == source)
		return (dest);
	while (a < count)
	{
		((char *)dest)[a] = ((unsigned char *)source)[a];
		a++;
	}
	return (dest);
}
