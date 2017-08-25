/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 15:12:51 by sdube             #+#    #+#             */
/*   Updated: 2016/11/23 15:12:54 by sdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *ret;

	if (!s || start + len > ft_strlen(s))
		return (NULL);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	return (ft_strncpy(ret, s + start, len));
}
