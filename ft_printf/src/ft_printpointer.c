#include "../include/ft_printf.h"

int ft_printpointer(unsigned long long pointer)
{
    int i;
    char hex[16];
    int counter;

    i = 0;
    counter = 0;
    counter += ft_printstring("0x");

    while (pointer != 0)
    {
        int temp = 0;
        temp = pointer % 16;
        if (temp < 10)
        {
            hex[i] = temp + '0';
            i++;
        }
        else
        {
            hex[i] = temp -10 + 'a';
            i++;
        }
        pointer = pointer / 16;
        counter = ft_printstring(hex);
    }
    return (counter);
}

