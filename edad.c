#include <stdio.h>
int main()
{
    char nombre[20];
    int edad;
    //Pedimos el nombre del usuario
    printf("Digite su nombre :  ");

    //Almacenamos el nombre en la variable nombre

    scanf("%s", nombre);

    // Pedimos la Edad del usuario

    printf("Digite su edad :  ");
    // Almacenamos la edad del usuario
    scanf("%d", &edad);

    // Mostramos en pantalla lo datos suministrados
    printf("\nWelcome  : %s ", nombre);
    printf("\nSu edad es : %d ", edad);
    printf("\n");
    return 0;
}