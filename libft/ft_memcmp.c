/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:22:26 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/26 03:47:12 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	if (n == 0)
		return (0);
	i = 0;
	a1 = (unsigned char *)s1;
	a2 = (unsigned char *)s2;
	while (a1[i] == a2[i] && i < (n - 1))
		i++;
	return (a1[i] - a2[i]);
}
