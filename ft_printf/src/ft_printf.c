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
            total++;
            
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
            else if (string[i+1] == 'c')
            {
                /* code */
            }
            else if (string[i+1] == 'c')
            {
               /* code */
            }
            else if (string[i+1] == 'c')
            {
              /* code */
            }
            else if (string[i+1] == 'c')
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