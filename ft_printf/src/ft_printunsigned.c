#include "../include/ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int nchar;

	nchar = 0;
	if(n >= 0 && n <= 9)
        nchar = nchar + ft_printchar(n + '0');
    else
    {
		nchar = nchar + ft_printunsigned(n / 10);
        nchar = nchar + ft_printchar(n % 10 + '0');
    }
	return (nchar);
}