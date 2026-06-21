#include <stdio.h>

int main()
{
    double area, base, altura;
    scanf("%lf", &base);
    scanf("%lf", &altura);
    area = base * altura / 2.0;
    printf("%.3lf", area);

    return 0;
}