/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttresori <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 18:12:19 by ttresori          #+#    #+#             */
/*   Updated: 2019/01/23 23:04:51 by ttresori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	search_env(char **env, int size, char *element)
{
	int pos;

	pos = 0;
	if (element == NULL || *element == '\0')
		return (-1);
	while (pos < size)
	{
		if (ft_strncmp(element, env[pos], ft_strlen(element)) == 0)
			return (pos);
		pos++;
	}
	return (-1);
}
