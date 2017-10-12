/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:47:45 by lkaser            #+#    #+#             */
/*   Updated: 2017/10/12 14:17:43 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst, int (*pred)(void *, size_t))
{
	while (lst)
	{
		if (pred(lst->content, lst->content_size))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
