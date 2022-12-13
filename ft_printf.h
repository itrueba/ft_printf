/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:55 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/13 19:38:54 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_convert(va_list args, const char format);
char	*ft_uitoa(unsigned int nb);
int		p_ptr(long nbr);
int		p_hex(unsigned int nbr, char format);
int		p_char(int c);
int		p_str(char *str);
int		p_unsigned(unsigned int nbr);
int		p_nbr(int nbr);

#endif