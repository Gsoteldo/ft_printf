#include "../include/ft_printf.h"

int ft_type_print(char c, va_list *vargs, int *total)
{
    if (c == 'c')
        total = total + ft_printchar(va_arg(*vargs, int));  
    else if (c == 's')
        total = total + ft_printstring(va_arg(*vargs, char *));
    else if (c == 'i' || c == 'd')
        total = total + ft_printinteger(va_arg(*vargs, int));
    else if (c == 'p')
        total = total + ft_printpointer(va_arg(*vargs, unsigned long long));
    else if (c == 'x' || c == 'X')
        total = total + ft_printhexa(va_arg(*vargs, unsigned int), c);
    else if (c == 'u')
        total = total + ft_printunsigned(va_arg(*vargs, unsigned int));
    else if (c == '%')
        total = total + ft_printchar('%');
    else
        total = total + ft_printchar(c);        
    return (*total);
}

int ft_printf(const char *string, ...)
{
    int total;
    int i;

    total = 0;
    i = 0;
    va_list vargs;
    va_start(vargs, string);
    while(string[i] != '\0')
    {
        if(string[i] == '%')
        {
            i++;
            total = total + ft_type_print(string[i], &vargs, &total);
            i++;
        }
        i++;
    }
    va_end(vargs);
    return total;
}
