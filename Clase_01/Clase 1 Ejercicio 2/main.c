#include <stdio.h>
#include <stdlib.h>

int main()
{
    char apellido;
    float sueldo;
    int aumento;
    float sueldoAumentado;

    printf("Ingrese el sueldo \n");
    scanf("%f", &sueldo);

    printf("Ingrese el apellido \n");
    fflush(stdin);
    scanf("%c", &apellido);

    printf("Ingrese el aumento \n");
    scanf("%d", &aumento);

    printf("%c tiene un sueldo de %.2f, con un aumento del %d prociento \n", apellido, sueldo, aumento);

    sueldoAumentado = sueldo + (sueldo * aumento / 100);

    printf("El sueldo con aumento es %.2f", sueldoAumentado);

    return 0;
}
