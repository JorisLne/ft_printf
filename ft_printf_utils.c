/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:12:46 by jlaine            #+#    #+#             */
/*   Updated: 2024/06/05 09:17:39 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	*len = *len + 1;
}

void	ft_putstr(char *str, int *len)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (str[i])
		write(1, &str[i++], 1);
	*len += i;
}

void	ft_putnbr(long long int n, int *len, int unsign)
{
	if (n < 0 && !unsign)
	{
		ft_putchar('-', len);
		n = -n;
	}
	if (n <= 9)
		ft_putchar(n + '0', len);
	if (n >= 10)
	{
		ft_putnbr(n / 10, len, unsign);
		ft_putchar(n % 10 + '0', len);
	}
}

void	ft_hexa(unsigned long long int n, int *len, int upper_lower)
{
	char	*base;

	if (upper_lower == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n == 0)
	{
		ft_putchar('0', len);
		return ;
	}
	if (n <= 15)
		ft_putchar(base[n], len);
	if (n > 15)
	{
		ft_hexa(n / 16, len, upper_lower);
		ft_putchar(base[n % 16], len);
	}
}

void	ft_ptr(unsigned long int ptr, int *len)
{
	if (ptr == 0)
		return (ft_putstr("(nil)", len));
	ft_putstr("0x", len);
	ft_hexa(ptr, len, 0);
}
