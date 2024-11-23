#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start (ap ,format);
	count = 0 ;
	while (*format)
	{
		if (*format  == '%')
			count +=print_format(*(++format) , ap);
		else
			count += write(1,format ,1);
		++format;
	}
	va_end(ap);
	return (count);
}
int main() {
    ft_printf("Hello, %s!\n", "world");
    ft_printf("Character: %c\n", 'A');
    ft_printf("Decimal: %d\n", -42);
    ft_printf("Unsigned: %u\n", 42);
    ft_printf("Hexadecimal: %X\n", 255);
    ft_printf("Pointer: %p\n\n", &main);

    printf("Hello, %s!\n", "world");
    printf("Character: %c\n", 'A');
    printf("Decimal: %d\n", -42);
    printf("Unsigned: %u\n", 42);
    printf("Hexadecimal: %X\n", 255);
    printf("Pointer: %p\n", &main);
    return 0;
}



