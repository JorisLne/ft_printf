/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 14:14:58 by jlaine            #+#    #+#             */
/*   Updated: 2024/06/05 09:17:48 by jlaine           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *str, int *count);
void	ft_which_arg(char c, va_list ap, int *n);
void	ft_ptr(unsigned long int ptr, int *count);
void	ft_putnbr(long long int n, int *count, int unsign);
void	ft_hexa(unsigned long long int n, int *count, int upper_lower);

#endif