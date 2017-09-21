/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 11:23:45 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/21 14:03:11 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *new;
	unsigned i;

	new = (char *)malloc(++size);
	if (!new)
		return (NULL);
	i = 0;
	while (i < size)
		new[i++] = '\0';
	return (new);
}
