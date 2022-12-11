#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "..\Libft\libft.h"

int	p_percent()
{
	ft_putchar_fd('%', 1);
	return (1);
}

int	p_hex(int nbr, char format)
{
	
}
int	p_unsigned(unsigned int nbr)
{
	
}
int	p_nbr(int	nbr)
{
	
}
int	p_ptr()
{
	
}
int	p_str(char *str)
{
	
}
int	p_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int ft_convert(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == 'c')
		return (p_char(va_arg(args, int)));
	else if (format == 's')
		return (p_str(va_arg(args, char *)));
	else if (format == 'p')
		return (p_ptr(va_arg(args, int)));
	else if (format == 'd' || format == 'i')
		return (p_nbr(va_arg(args, int)));
	else if (format == 'u')
		return (p_unsigned(va_arg(args, unsigned int)));
	else if (format == 'x' || format == 'X')
		return (p_hex(va_arg(args, unsigned int), format));
	else if (format == '%')
		return (p_percent());
}

int ft_printf(const char *str, ...)
{
	va_list args;
	int length;

	length = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			length+= ft_convert(args, *str);
		}
		else
			length+= p_char(*str);
		str++;
	}
	va_end(args);
	return (length);
}

int main(void)
{
	int i = printf("Hola Perico %s  %s", "Hola", "Don Jose");
	printf("%d", i);
	i = ft_printf("Hola Perico");
	printf("%d", i);
}