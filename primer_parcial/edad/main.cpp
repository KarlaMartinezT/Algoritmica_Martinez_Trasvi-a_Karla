#include <stdio.h>

int main(){
    int a, edad;
    char nombre[20];

    printf("Dame tu nombre: ");
    scanf("%s", &nombre);
    printf("Introduce tu a de nacimiento: ");
    scanf("%d",&a);
    edad = 2024 - a;
    printf("Hola %s tu edad es %d",nombre, edad);

    return 0;
}
