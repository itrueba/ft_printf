#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "..\Libft\libft.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
		}
		else
        {
            print_length++;
            ft_putchar_fd(str[i], 1);
        }
			
		i++;
	}
	va_end(args);
	return (print_length);
}

int main(void)
{
    int i = printf("Hola Perico %s  %s", "Hola", "Don Jose");
    printf("%d", i);
	i = ft_printf("Hola Perico");
    printf("%d", i);
}