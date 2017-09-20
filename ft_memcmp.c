/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:00:32 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/19 21:12:42 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	unsigned		i;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	if (n < 1)
		return (NULL);
	while (i < n)
	{
		if (a[i] < b[i])
			return (a[i] - b[i]);
		if (a[i] > b[i])
			return (a[i] - b[i]);
		++i;
	}
	return (NULL);
}
