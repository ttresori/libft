/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/20 00:46:03 by ttresori          #+#    #+#             */
/*   Updated: 2017/11/20 00:47:41 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *tmp;

	tmp = NULL;
	while (*alst)
	{
		del((*alst)->content, (*alst)->content_size);
		free(*alst);
		tmp = *alst;
		tmp = NULL;
		*alst = (*alst)->next;
	}
}
