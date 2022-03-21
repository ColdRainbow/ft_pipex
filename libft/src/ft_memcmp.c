/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:50:02 by jkate             #+#    #+#             */
/*   Updated: 2020/11/02 20:38:37 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *buf1, const void *buf2, size_t count)
{
	size_t	a;

	a = 0;
	while (a < count)
	{
		if (((unsigned char *)buf1)[a] != ((unsigned char *)buf2)[a])
			return (((unsigned char *)buf1)[a] - ((unsigned char *)buf2)[a]);
		a++;
	}
	return (0);
}
