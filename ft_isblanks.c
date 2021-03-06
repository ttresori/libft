/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblanks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <emandret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 19:44:57 by carmand           #+#    #+#             */
/*   Updated: 2016/11/30 22:09:25 by carmand          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isblanks(int c)
{
	if (c == ' ' || c == '\t' || c == '\f' ||
	c == '\r' || c == '\v' || c == '\n')
		return (1);
	return (0);
}
