/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 17:55:40 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/19 21:11:04 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char		*copy;
	unsigned	len;
	unsigned	i;

	len = ft_strlen(str);
	i = 0;
	copy = (char *)malloc(len + 1);
	if (!copy)
		return (NULL);
	while (i < len)
	{
		copy[i] = str[i];
		++i;
	}
	copy[i] = '\0';
	return (copy);
}
