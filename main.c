#include "ft_printf.h"

int main(void)
{
    void *ptr;
    ft_printf("Caracter: %c , String: %s , Puntero: %p , Decimal.0: %d , Decimal.1: %i , Sin signo: %u , hexadecimal: %x , HEXADECIMAL: %X , %%: %%.", 'c', "Hola", ptr, 2147483647, -2147483648, -1, 54987, 54987);
    printf("\n");
    printf("Caracter: %c , String: %s , Puntero: %p , Decimal.0: %d , Decimal.1: %i , Sin signo: %u , hexadecimal: %x , HEXADECIMAL: %X , %%: %%.", 'c', "Hola", ptr, 2147483647, -2147483647 -1, -1, 54987, 54987);
    return (0);
}
