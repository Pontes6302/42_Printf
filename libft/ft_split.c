/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 01:06:25 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/28 01:06:26 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	w;

	i = 0;
	w = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			return (w);
		while (s[i] != c && s[i])
			i++;
		w++;
	}
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	int		start;

	res = (char **) malloc((count(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (0);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		res[j] = ft_substr(s, start, i - start);
		j++;
	}
	res[j] = NULL;
	return (res);
}
