#include "./include/ft_printf.h"
#include <stdio.h>
int main()
{
    int total = ft_printf("Hola mundo");

   ft_printf("La frase tiene %c letras %i\n", 'A', total);
   total = ft_printf("%c\n", 'A');
   printf("La frase tiene %d letras\n", total);
   ft_printf("%s\n", "Hola mundo");
   ft_printf("El año es %c uando se invento el pan\n");
    printf("El puntero es %p\n\n", &total);
    printf("El puntero es %x\n\n", 100);
    printf("El puntero es %X\n\n", 100);
    ft_printf("Hola Mundo %c");
    return 0;
}