/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 01:35:34 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/22 18:44:36 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			p;
	int			n;
	long int	ret;

	n = 1;
	p = 0;
	ret = 0;
	while (str[p] == ' ' || str[p] == '\t' || str[p] == '\n'
		|| str[p] == '\v' || str[p] == '\f' || str[p] == '\r')
		p++;
	if (str[p] == '-' || str[p] == '+')
	{
		if (str[p] == '-')
			n = -1;
		p++;
	}
	while (str[p] >= '0' && str[p] <= '9')
	{
		ret = (ret * 10) + (str[p] - 48);
		p++;
	}
	return (n * ret);
}
