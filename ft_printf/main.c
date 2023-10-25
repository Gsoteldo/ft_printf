#include "./include/ft_printf.h"
#include <stdio.h>
int main()
{
    int total = ft_printf("Hola mundo");

    ft_printf("La frase tiene %c letras\n", 'A');
   printf("La frase tiene %d letras\n", total);
   ft_printf("%s\n", "Hola mundo");
   
    return 0;
}