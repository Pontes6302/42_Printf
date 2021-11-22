/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 03:41:00 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/26 03:41:01 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	if (start >= ft_strlen(s))
	{
		res = malloc(sizeof(char));
		if (!res)
			return (0);
		*res = '\0';
		return (res);
	}
	if (ft_strlen(s) < len)
		return (ft_strdup((char *)s + start));
	res = (char *)malloc(len + 1 * sizeof(char));
	if (!res)
		return (0);
	while (start < ft_strlen(s) && i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
