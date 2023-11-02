#include "../include/ft_printf.h"

int ft_printstring(char *str)
{
    if(str == NULL)
    {       
        write(1, "(null)", 6);
        return (6);
    }
    write(1, str, ft_strlen(str));
    return (ft_strlen(str));
}