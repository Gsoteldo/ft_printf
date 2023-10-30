#include "../include/ft_printf.h"

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
            if (string[i+1] == 'c')
            {
                i++;
                total = total + ft_printchar(va_arg(vargs, int));
            }
            else if (string[i+1] == 's')
            {
                i++;
                total = total + ft_printstring(va_arg(vargs, char *));
            }
            else if (string[i+1] == 'i' || string[i+1] == 'd')
            {
                i++;
                total = total + ft_printinteger(va_arg(vargs, int));
            }
            else if (string[i+1] == 'p')
            {
                i++;
                total = total + ft_printpointer(va_arg(vargs, unsigned long long));

            }
            else if (string[i+1] == 'x' || string[i+1] == 'X')
            {
                i++;
                total = total + ft_printhexa(va_arg(vargs, unsigned int), string[i]);
            }
            else if (string[i+1] == 'u')
            {
              /* code */
            }
            else if (string[i+1] == '%')
            {
                /* code */
            }
        }
        else
           total = total + ft_printchar(string[i]);

        i++;
    }
    va_end(vargs);
    return total;
}
