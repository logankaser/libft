/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:23:45 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/29 11:57:18 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new;
	unsigned	i;

	new = (char *)malloc(++size);
	NULL_GUARD(new);
	i = 0;
	while (i < size)
		new[i++] = '\0';
	return (new);
}
