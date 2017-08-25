/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:47:30 by sdube             #+#    #+#             */
/*   Updated: 2016/11/23 14:47:33 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char *strsrc;
	char *strdst;

	strsrc = (char *)src;
	strdst = (char *)dst;
	while (n--)
	{
		*strdst = *strsrc;
		strdst++;
		if (*strsrc == (char)c)
			return ((void *)strdst);
		strsrc++;
	}
	return (NULL);
}
