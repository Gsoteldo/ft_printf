#include "../include/ft_printf.h"

int	ft_printunsigned(unsigned int n)
{
	int		num;
	char	aux;
	int nchar;

	nchar = 0;
    num = n;
	/*if (n == -2147483648)
	{
		ft_printstring("-2147483648");
		return (11);
	}*/
	if (n < 0)
	{
		return (0);
	}
//	else
//		num = n;
	if (num / 10 != 0)
		nchar = nchar + ft_printunsigned(num / 10);
	aux = num % 10 + '0';
	ft_printchar(aux);
	nchar++;
	return (nchar);
}