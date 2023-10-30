#include "../include/ft_printf.h"

int	ft_printhexa(unsigned int n, char c)
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
}

