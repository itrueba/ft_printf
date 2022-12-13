/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itrueba- <itrueba-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 11:08:55 by itrueba-          #+#    #+#             */
/*   Updated: 2022/12/13 19:07:09 by itrueba-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include "Libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

char	*ft_uitoa(unsigned int nb);
int		p_ptr(long nbr);
int		p_hex(unsigned int nbr, char format);
int		p_char(int c);
int		p_str(char *str);
int		p_unsigned(unsigned int nbr);
int		p_nbr(int nbr);

#endif