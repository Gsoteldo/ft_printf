#include "../include/ft_printf.h"

int	ft_printinteger(int n)
{
	int		num;
	char	aux;
	int nchar;

	nchar = 0;
	if (n == -2147483648)
	{
		ft_printstring("-2147483648");
		return (11);
	}
	if (n < 0)
	{
		write(1, "-", 1);
		num = n * -1;
		nchar++;
	}
	else
		num = n;
	if (num / 10 != 0)
		nchar = nchar + ft_printinteger(num / 10);
	aux = num % 10 + '0';
	ft_printchar(aux);
	nchar++;
	return (nchar);
}
