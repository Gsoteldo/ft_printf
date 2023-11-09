#include "../include/ft_printf.h"

int	ft_printchar(int c)
{
	int	count;

	count = 0;
	count = count + write(1, &c, 1);
	return (count);
}
