/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:55 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/15 17:26:37 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(char const *, ...);
int	p_ptr(unsigned long long nbr);
int	p_hex(unsigned int nbr, char format);
int	p_char(int c);
int	p_str(char *str);
int	p_unsigned(unsigned int nbr);
int	p_nbr(int nbr);

#endif