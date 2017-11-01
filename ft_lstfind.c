/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkaser <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/12 13:47:45 by lkaser            #+#    #+#             */
/*   Updated: 2017/10/25 16:08:27 by lkaser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstfind(t_list *lst,
		char (*pred)(const void *, const void *), const void *data)
{
	while (lst)
	{
		if (pred(lst->content, data))
			return (lst);
		lst = lst->next;
	}
	return (NULL);
}
