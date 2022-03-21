/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:51:17 by jkate             #+#    #+#             */
/*   Updated: 2020/11/13 21:35:12 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*process(long n)
{
	char	*res;
	int		c;
	long	d;

	c = 0;
	d = n;
	while (n >= 1)
	{
		c++;
		n /= 10;
	}
	res = (char *)ft_calloc(c + 2, 1);
	if (!res)
		return (NULL);
	while (d >= 1)
	{
		res[c] = d % 10 + 48;
		c--;
		d /= 10;
	}
	res[0] = '-';
	return (res);
}

char	*another_process(int n)
{
	char	*res;
	int		c;
	int		d;

	c = 0;
	d = n;
	while (n >= 1)
	{
		c++;
		n /= 10;
	}
	res = (char *)ft_calloc(c + 1, 1);
	c--;
	while (d >= 1)
	{
		res[c] = d % 10 + 48;
		c--;
		d /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;

	if (n == 0 || n == -0)
	{
		res = (char *)malloc(2);
		res[0] = '0';
		res[1] = '\0';
		return (res);
	}
	if (n < 0)
		res = process(-(long)n);
	else
		res = another_process(n);
	return (res);
}
