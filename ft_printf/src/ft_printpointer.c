#include "../include/ft_printf.h"

int ft_printpointer(unsigned long long pointer)
{
    char *base;
    char str[16];
    int i;
    int count;

    i = 0;
    count = 0;
    base = "0123456789abcdef";
    count = count + ft_printstring("0x");
    while (pointer > 0)
    {
        str[i] = base[pointer % 16];
        pointer = pointer / 16;
        i++;
    }
    while(i >= 0)
    {
        count = count + ft_printchar(str[i]);
        i--;
    }
    return (count);
}