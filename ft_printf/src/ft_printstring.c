#include "../include/ft_printf.h"

int ft_printstring(char *str)
{
    
    write(1, str, ft_strlen(str));

    return (ft_strlen(str));
}