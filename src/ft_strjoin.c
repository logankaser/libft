/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 20:25:50 by lkaser            #+#    #+#             */
/*   Updated: 2018/07/06 20:25:52 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	char		*c;
	unsigned	len;

	len = ft_strlen(a) + ft_strlen(b);
	NULL_GUARD(c = malloc(len + 1));
	c[len] = '\0';
	while (*a)
		*c++ = *a++;
	while (*b)
		*c++ = *b++;
	return (c - len);
}
