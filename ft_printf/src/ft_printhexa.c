#include "../include/ft_printf.h"

int	ft_printhexa(unsigned int n, char c)
{
	int	numchar;

	numchar = 0;
	if (n >= 16)
	{
		numchar = numchar + ft_printhexa(n / 16, c);
		numchar = numchar + ft_printhexa(n % 16, c);
	}
	else
	{
		if (n <= 9)
			numchar = numchar + ft_printchar(n + '0');
		else
		{
			if (c == 'x')
				numchar = numchar + ft_printchar(n - 10 + 'a');
			else if (c == 'X')
				numchar = numchar + ft_printchar(n - 10 + 'A');
		}
	}
	return (numchar);
}
