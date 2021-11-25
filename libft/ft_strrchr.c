/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 17:13:24 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/20 17:31:09 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;
	char		temp;
	int			i;

	str = s;
	i = ft_strlen(s);
	s = s + i;
	temp = (unsigned char) c;
	while (*s != *str && temp != *s)
		s--;
	if (temp == *s)
		return ((char *)s);
	return (0);
}
