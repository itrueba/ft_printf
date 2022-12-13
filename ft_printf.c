#include "../Libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

int	p_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	p_percent(void)
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	p_hex(int nbr, char format)
{
	char	*base;

	base = "0123456789abcdef";
	if (nbr > 15)
		p_hex(nbr / 16, format);
	p_char(base[nbr % 16]);
	return (1);
}

int	p_unsigned(unsigned int nbr)
{
	return (1);
}

int	p_nbr(int nbr)
{
	return (1);
}

int	p_ptr(long long nbr)
{
	return (1);
}

int	p_str(char *str)
{
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_convert(va_list *args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		length = p_char(va_arg(*args, int));
	else if (format == 's')
		length = p_str(va_arg(*args, char *));
	else if (format == 'p')
		length = p_ptr(va_arg(*args, long long));
	else if (format == 'd' || format == 'i')
		length = p_nbr(va_arg(*args, int));
	else if (format == 'u')
		length = p_unsigned(va_arg(*args, unsigned int));
	else if (format == 'x' || format == 'X')
		length = p_hex(va_arg(*args, unsigned int), format);
	else if (format == '%')
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
			length += ft_convert(&args, *str);
		}
		else
			length += p_char(*str);
		str++;
	}
	va_end(args);
	return (length);
}

int	main(void)
{
	ft_printf("Hola Perico %x ", 1245);
}