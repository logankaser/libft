/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 20:23:12 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/19 19:42:04 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	dst_size;
	unsigned int	src_size;

	if (size < 1)
		return (0);
	dst_size = 0;
	while (dst[dst_size])
		++dst_size;
	src_size = 0;
	while (src[src_size])
		++src_size;
	i = 0;
	while (src[i] && ((dst_size + i) < (size - 1)))
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (src_size + ((dst_size < size) ? dst_size : size));
}
