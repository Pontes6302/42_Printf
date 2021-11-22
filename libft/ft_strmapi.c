/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:22:47 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/27 23:22:48 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sr;
	int		i;

	i = 0;
	sr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!sr)
		return (0);
	while (s[i])
	{
		sr[i] = (*f)(i, s[i]);
		i++;
	}
	sr[i] = '\0';
	return (sr);
}
