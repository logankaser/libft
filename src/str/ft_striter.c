/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 20:25:37 by lkaser            #+#    #+#             */
/*   Updated: 2018/07/06 20:25:40 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *str, void (*fn)(char *))
{
	while (*str)
		fn(str++);
}

void	ft_striter_u(char *str, int (*fn)(int))
{
	while (*str)
	{
		*str = fn(*str);
		++str;
	}
}
