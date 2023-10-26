#ifndef FT_PRINTF
# define FT_PRINTF

#include "../libft/libft.h"
#include <stdarg.h>

int ft_printchar(int c);
int ft_printstring(char *str);
int ft_printinteger(int num);
int ft_printpointer(unsigned long long pointer);
int ft_printf(const char *string, ...);

#endif