#include <conio.h>
#include <stdio.h>

int main()
{
    char nombre[20];
    char apellido[30];

    printf("Introduzca su nombre: ");
    scanf("%s", nombre);
    printf("Introduzca su apellido: ");
    scanf("%S", apellido);
    printf("Hola %s %S buenos dias.", nombre, apellido);
    getch(); /* pausa */
    return 0;
}
