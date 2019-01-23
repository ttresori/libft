/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 02:31:52 by ttresori          #+#    #+#             */
/*   Updated: 2017/11/10 03:08:44 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	if (!(str = malloc(sizeof(char) * (i + 1))))
		return (0);
	str = ft_strcpy(str, src);
	return (str);
}
