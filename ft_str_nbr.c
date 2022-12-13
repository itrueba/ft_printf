/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_nbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:15:56 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/13 18:16:19 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	p_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	p_unsigned(unsigned int nbr)
{
	return (p_str(ft_uitoa(nbr)));
}

int	p_nbr(int nbr)
{
	return (p_str(ft_itoa(nbr)));
}
