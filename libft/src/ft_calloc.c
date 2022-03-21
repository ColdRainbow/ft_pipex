/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:40:58 by jkate             #+#    #+#             */
/*   Updated: 2020/11/05 23:34:41 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	size_t	a;
	char	*res;

	res = (char *)malloc(num * size);
	a = 0;
	if (res == NULL)
		return (NULL);
	while (a < num * size)
	{
		res[a] = 0;
		a++;
	}
	return ((void *)res);
}
