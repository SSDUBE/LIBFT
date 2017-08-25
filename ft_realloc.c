/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 14:54:25 by sdube             #+#    #+#             */
/*   Updated: 2016/11/23 14:54:27 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** Makes sure src is valid
** if newsize < srcsize, src is truncated
*/

void	*ft_realloc(void *src, size_t srcsize, size_t newsize)
{
	void *ret;

	if (!src)
		return (NULL);
	ret = ft_memalloc(newsize);
	ft_memcpy(ret, src, MIN(srcsize, newsize));
	free(src);
	return (ret);
}
