#include <stdint.h>
#include <stdio.h>
#include <malloc.h>

int main()
{
    float number1 = 7.3;
    float number2;
    float *fptr;
    fptr = &number1;
    printf ("lo que apunta el puntero, contiene: %.1f \n", *fptr);

    fptr = &number2;
    *fptr = 7.3;
    printf ("ahora el puntero apunta a otra variable que contiene: %.1f \n", *fptr);
    printf ("la direccion de la variable 1 es: %p \n", &number1);
    printf ("el puntero apunta a: %p \n", fptr);

    return 0;
}
