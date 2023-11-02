#include "../include/ft_printf.h"

static int	ft_printhexapointer(unsigned long long n)
{
	int	numchar;
	numchar = 0;
	if (n >= 16)
	{
		numchar = numchar + ft_printhexapointer(n / 16);
		numchar = numchar + ft_printhexapointer(n % 16);
	}
	else
	{
		if (n <= 9)
			numchar = numchar + ft_printchar(n + '0');
		else
		{
			numchar = numchar + ft_printchar(n - 10 + 'a');
		}
	}
	return (numchar);
}

int ft_printpointer(unsigned long long pointer)
{
    int count;
    
    count = 0;
    count = count + ft_printstring("0x");
    count = count + ft_printhexapointer(pointer);
    return (count);
}