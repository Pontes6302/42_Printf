/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 22:50:41 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/26 01:24:37 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	p;
	int					a;
	char				*ret;

	ret = (char *)haystack;
	p = 0;
	if (needle[0] == '\0')
		return (ret);
	while (ret[p] && p < len)
	{
		if (ret[p] == needle[0])
		{
			a = 1;
			while (needle[a] != '\0' && ret[p + a] == needle[a]
				&& (p + a) < len)
				a++;
			if (needle[a] == '\0')
				return (&ret[p]);
		}
		p++;
	}
	return (0);
}
