/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkate <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 14:52:31 by jkate             #+#    #+#             */
/*   Updated: 2020/10/31 21:23:52 by jkate            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int arg)
{
	if (arg < 48 || (arg > 57 && arg < 65) || (arg > 90 && arg < 97)
		|| arg > 122)
		return (0);
	else
		return (1);
}
