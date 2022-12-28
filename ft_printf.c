/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:04:48 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/28 13:56:14 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

int	p_percent(void)
{
	p_char('%');
	return (1);
}

int	ft_convert(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = p_char(va_arg(args, int));
	if (format == 's')
		length = p_str(va_arg(args, char *));
	if (format == 'p')
		length = p_ptr(va_arg(args, unsigned long long));
	if (format == 'd' || format == 'i')
		length = p_nbr(va_arg(args, int));
	if (format == 'u')
		length = p_unsigned(va_arg(args, unsigned int));
	if (format == 'x' || format == 'X')
		length = p_hex(va_arg(args, unsigned int), format);
	if (format == '%')
		length = p_percent();
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		length;

	length = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			length += ft_convert(args, *str);
		}
		else
			length += p_char(*str);
		str++;
	}
	va_end(args);
	return (length);
}
