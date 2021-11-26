/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sifreita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 03:35:17 by sifreita          #+#    #+#             */
/*   Updated: 2021/11/22 03:35:20 by sifreita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_redirect(char c)
{
	if (c == 'c')
		return (ft_printf_c);
	if (c == 's')
		return (ft_printf_s);
	if (c == 'p')
		return (ft_printf_p);
	if (c == 'd')
		return (ft_printf_d);
	if (c == 'i')
		return (ft_printf_i);
	if (c == 'u')
		return (ft_printf_u);
	if (c == 'x')
		return (ft_printf_x);
	return (ft_printf_xm);
}

int	ft_printf(const char *par, ...)
{
	int		i;
	int		c;
	va_list	ag;

	va_start(ag, par);
	i = 0;
	c = 0;
	while (par[i])
	{
		if (par[i] == '%' && ft_strchr("cspdiuxX", par[++i]))
		{
			c = c + (((int (*)())ft_redirect(par[i++]))(va_arg(ag, void *)));
			continue ;
		}
		write (1, par + i, 1);
		c++;
		i++;
	}
	va_end(ag);
	return (c);
}

// int	main(void)
// {
// 	int a = printf("Hello World\n");
// 	int b = ft_printf("Hello World\n");
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%d\n", 10000);
// 	b = ft_printf("%d\n", 10000);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%d\n", -123421);
//         b = ft_printf("%d\n", -123421);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%d\n", 0);
//         b = ft_printf("%d\n", 0);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%u\n", -123421);
//         b = ft_printf("%u\n", -123421);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%d\n", 321);
//         b = ft_printf("%d\n", 321);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%x\n", -123421);
//         b = ft_printf("%x\n", -123421);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%X\n", -7776);
//         b = ft_printf("%X\n", -7776);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%p\n", &a);
//         b = ft_printf("%p\n", &a);
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	a = printf("%s\n", "Hello Wiorld!!!!");
//         b = ft_printf("%s\n", "Hello Wiorld!!!!");
// 	printf("Results Original: %d\nYours: %d\n", a, b);
// 	return (0);
// }