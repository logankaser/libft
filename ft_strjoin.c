/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 20:38:49 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/22 12:02:33 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *a, char const *b)
{
	char		*cat;
	char		*c;
	unsigned	len;

	NULL_GUARD((a && b));
	len = ft_strlen(a) + ft_strlen(b);
	cat = (char *)malloc(len + 1);
	if (!cat)
		return (0);
	cat[len] = '\0';
	c = cat;
	while (*a)
		*c++ = *a++;
	while (*b)
		*c++ = *b++;
	return (cat);
}
