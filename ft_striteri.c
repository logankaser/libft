/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/20 17:15:27 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/20 17:31:27 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *str, void (*fn)(unsigned i, char *))
{
	unsigned i;

	i = 0;
	while (*str)
		fn(i++, str++);
}