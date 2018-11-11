/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 20:21:09 by lkaser            #+#    #+#             */
/*   Updated: 2018/11/10 16:02:45 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char		negative;
	unsigned	out;

	out = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		++str;
	negative = *str == '-';
	if (negative || *str == '+')
		++str;
	while (*str >= '0' && *str <= '9')
	{
		out *= 10;
		out += (int)(*str - '0');
		++str;
	}
	return (negative ? -out : out);
}
