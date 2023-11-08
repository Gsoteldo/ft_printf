#include "./include/ft_printf.h"
#include <stdio.h>
int main()
{
    int total = ft_printf("Hola mundo");

   ft_printf(" %d ",  -51);
   total = ft_printf("%c\n", 'A');
   printf("La frase tiene %d letras\n", total);
   ft_printf("%s\n", "Hola mundo");
   ft_printf("El año es %c uando se invento el pan\n");
    ft_printf("El puntero es %p\n\n", -1);
    //printf("El puntero es %p\n\n", -1);
    printf("El puntero es %x\n\n", 42);
    ft_printf("El numero 100 en hexadecimal es: %x\n\n", 42);
    printf("El puntero es %X\n\n", 42);
    ft_printf("El numero 100 en hexadecimal es: %X\n\n", 42);
    ft_printf("El año es %% cuando se invento el pan\n");
    

    ft_printf("Prueba de todos los tipos de datos:\n la letra %c es la primera de la palabra %s que tiene %i letras. El numero %i en hexadecimal es %x y en mayusculas es %X\n\n", 'h', "hola", 4, 42, 42, 42);
    //TODO: ft_printf("Hola Mundo %c"); (Revisar por que sigue imprimiendo el %c)



    return 0;
}