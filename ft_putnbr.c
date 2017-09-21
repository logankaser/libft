/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <lkaser@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 09:08:27 by lkaser            #+#    #+#             */
/*   Updated: 2017/09/21 15:04:42 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		render_nbr(int nb)
{
	if (nb >= 10 || nb <= -10)
	{
		render_nbr(nb / 10);
		render_nbr(nb % 10);
	}
	else
		ft_putchar((nb > 0 ? nb : nb * -1) + 48);
}

void			ft_putnbr(int nb)
{
	if (nb < 0)
		ft_putchar('-');
	render_nbr(nb);
}
