/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:11:24 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/15 17:26:11 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

static int	hex(unsigned long long nbr, char format)
{
	char	*base;
	int		len;

	len = 1;
	base = "0123456789abcdef";
	if (format == 'X')
		base = "0123456789ABCDEF";
	if (nbr > 15)
		len += hex(nbr / 16, format);
	p_char(base[nbr % 16]);
	return (len);
}

int	p_ptr(unsigned long long nbr)
{
	p_char('0');
	p_char('x');
	return (hex(nbr, 'x') + 2);
}

int	p_hex(unsigned int nbr, char format)
{
	return (hex((unsigned long long)nbr, format));
}
