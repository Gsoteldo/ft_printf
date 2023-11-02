#include "../include/ft_printf.h"

/*int	ft_printhexa(unsigned int n, char c)
{
    char	*hexa;
    char	result[100];
    int		i;
    int		size;

    hexa = "0123456789abcdef";
    if (c == 'X')
        hexa = "0123456789ABCDEF";
    i = 0;
    while (n > 0)
    {
        result[i] = hexa[n % 16];
        n /= 16;
        i++;
    }
    size = i;
    while (i-- > 0)
        write(1, &result[i], 1);
    return (size);
}*/
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