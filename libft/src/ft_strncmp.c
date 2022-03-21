/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 21:43:12 by jkate             #+#    #+#             */
/*   Updated: 2020/11/03 21:12:58 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	int	a;

	a = 0;
	if (num == 0)
		return (0);
	while (num != 0 && str1[a] != '\0' && str2[a] == str1[a])
	{
		num--;
		if (str1[a] == str2[a] && num != 0)
			a++;
	}
	return (((unsigned char *)str1)[a] - ((unsigned char *)str2)[a]);
}
