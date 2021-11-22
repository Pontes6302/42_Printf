/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 04:06:00 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/26 04:06:02 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		i;
	int		a;

	i = 0;
	res = malloc((ft_strlen(s1) * sizeof(char))
			+ (ft_strlen(s2) * sizeof(char)));
	if (res == NULL)
		return (0);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	a = i;
	i = 0;
	while (s2[i])
	{
		res[i + a] = s2[i];
		i++;
	}
	res[i + a] = '\0';
	return (res);
}
