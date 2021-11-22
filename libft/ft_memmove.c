/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 18:47:47 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/22 18:47:49 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			step;
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sorc;

	step = +1;
	dest = (unsigned char *)dst;
	sorc = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		step = -1;
		dest = (unsigned char *)(dst + len - 1);
		sorc = (unsigned char *)(src + len - 1);
	}
	i = 0;
	while (i < len)
	{
		*dest = *sorc;
		dest += step;
		sorc += step;
		i++;
	}
	return (dst);
}
