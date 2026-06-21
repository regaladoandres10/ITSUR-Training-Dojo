#include <stdio.h>

int main()
{
    double r;
    double h;
    double pi = 3.1416;
    double V;
    scanf("%lf", &r);
    scanf("%lf", &h);
    V = 1.0/3.0 * pi * r * r * h ;
    printf("VOLUMEN=%0.2f \n", V);

    return 0;
}