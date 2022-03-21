/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:25:44 by jkate             #+#    #+#             */
/*   Updated: 2020/11/04 00:46:29 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *source, size_t n)
{
	size_t	a;

	a = 0;
	if (dest == 0 && source == 0)
		return (NULL);
	if (source < dest)
	{
		while (n--)
			((char *)dest)[n] = ((char *)source)[n];
	}
	else
	{
		while (n--)
		{
			((char *)dest)[a] = ((char *)source)[a];
			a++;
		}
	}
	return (dest);
}
