/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:51:03 by sdube             #+#    #+#             */
/*   Updated: 2016/11/23 14:51:06 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printjoin(char *delim, char **arr, size_t size)
{
	if (!arr || !*arr)
		return ;
	while (size--)
	{
		ft_putstr(*arr++);
		if (size >= 1)
			ft_putstr(delim);
	}
}
