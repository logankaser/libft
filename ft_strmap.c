/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 16:46:49 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/20 20:40:48 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*fn)(char))
{
	char		*new;
	unsigned	i;

	i = ft_strlen(str);
	new = malloc(i + 1);
	if (!new)
		return (NULL);
	new[i] = '\0';
	i = 0;
	while (*str)
	{
		new[i] = fn(*str);
		++i;
		++str;
	}
	return (new);
}
