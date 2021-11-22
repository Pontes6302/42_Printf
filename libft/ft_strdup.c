/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 01:43:54 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/26 01:43:55 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		p;
	char	*str2;

	str2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!str2)
		return (0);
	p = 0;
	while (s1[p])
	{
		str2[p] = s1[p];
		p++;
	}
	str2[p] = '\0';
	return (str2);
}
