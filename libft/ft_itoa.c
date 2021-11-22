/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 22:39:00 by sifreita          #+#    #+#             */
/*   Updated: 2021/10/27 22:39:01 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countdigits(long n)
{
	int	d;

	if (n < 0)
		d = 1;
	else
		d = 0;
	while (1)
	{
		n = n / 10;
		d++;
		if (n == 0)
			break ;
	}
	return (d);
}

char	*ft_itoa(int n)
{
	int		d;
	long	nn;
	char	*ret;

	nn = (long)n;
	d = countdigits(nn);
	ret = malloc((d + 1) * sizeof(char));
	if (!ret)
		return (0);
	if (nn < 0)
	{
		ret[0] = '-';
		nn = nn * -1;
	}
	ret[d] = '\0';
	while (1)
	{
		ret[d - 1] = nn % 10 + '0';
		nn = nn / 10;
		d--;
		if (nn == 0)
			break ;
	}
	return (ret);
}
