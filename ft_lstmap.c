/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 03:38:46 by ttresori          #+#    #+#             */
/*   Updated: 2019/01/24 03:05:26 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *bgn;

	if (!(new_lst = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	bgn = new_lst;
	*new_lst = (*f(lst));
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(new_lst->next = (t_list *)malloc(sizeof(t_list))))
		{
			ft_memdel((void**)new_lst);
			return (NULL);
		}
		new_lst = new_lst->next;
		*new_lst = (*f(lst));
		lst = lst->next;
	}
	return (bgn);
}
