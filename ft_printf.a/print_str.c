#include "ft_printf.h"

int	print_str(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		print_char((int )*str);
		++count;
		++str;
	}
	return (count);
}
