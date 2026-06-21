#include <stdio.h>

int main()
{
    int a, b, suma, resta, mult, div, mod;
    scanf("%d", &a);
    scanf("%d", &b);
    //Operacion suma.
    suma = a + b;
    printf("%d \n", suma);
    //Operacon resta.
    resta = a - b;
    printf("%d \n", resta);
    //Operacion multipliacion.
    mult = a * b;
    printf("%d \n", mult);
    //Operacion division.
    div = a / b;
    printf("%d \n", div);
    //Operacion modulo.
    mod = a % b;
    printf("%d \n", mod);


    return 0;
}