/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:15:56 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/15 16:38:46 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	p_str(char *str)
{
	if (!str)
		return (write(1, "(null)", 6));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

static int	nb_len(long nb)
{
	int	len;

	len = 1;
	if (nb < 0)
		nb *= -1;
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

static void	ft_alocate(unsigned int number, int len)
{
	int	x;
	int	aux;

	x = 1;
	while (--len > 0)
		x *= 10;
	while (x > 0)
	{
		aux = number / x;
		number = number - (aux * x);
		p_char(aux + '0');
		x /= 10;
	}
}

int	p_nbr(int nbr)
{
	long	number;
	int		len;
	int		aux;

	aux = 0;
	number = nbr;
	len = nb_len(number);
	if (number == 0)
		return (p_char('0'));
	if (number < 0)
	{
		p_char('-');
		number = number * -1;
		aux = 1;
	}
	ft_alocate(number, len);
	return (aux + len);
}

int	p_unsigned(unsigned int nbr)
{
	int		len;
	int		aux;

	aux = 0;
	len = nb_len(nbr);
	if (nbr == 0)
		return (p_char('0'));
	ft_alocate(nbr, len);
	return (len);
}
