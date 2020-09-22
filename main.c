#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nombre[100];

    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    printf("Hola %s", nombre);

    return 0;
}
