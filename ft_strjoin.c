/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 20:38:49 by lkaser            #+#    #+#             */
/*   Updated: 2017/10/26 14:38:45 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	char		*c;
	unsigned	len;

	len = ft_strlen(a) + ft_strlen(b);
	c = malloc(len + 1);
	c[len] = '\0';
	if (a)
		while (*a)
			*c++ = *a++;
	if (b)
		while (*b)
			*c++ = *b++;
	return (c - len);
}
