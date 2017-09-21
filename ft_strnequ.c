/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 18:21:19 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/20 18:28:34 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *a, char const *b, size_t n)
{
	unsigned i;

	i = 0;
	while ((*a || *b) && i++ < n)
		if (*a++ != *b++)
			return (0);
	return (1);
}