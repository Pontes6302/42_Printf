/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 16:25:42 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/20 16:25:43 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	p;
	size_t	s;
	size_t	l;

	s = 0;
	p = 0;
	l = ft_strlen(src);
	while (dst[s] && s < dstsize)
		s++;
	while (src[p] && (p + s + 1) < (dstsize))
	{
		dst[p + s] = src[p];
		p++;
	}
	if (s < dstsize)
		dst[s + p] = '\0';
	return (l + s);
}
