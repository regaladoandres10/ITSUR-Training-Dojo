#include <stdio.h>

int main()
{
    double r, h, area, volumen;
    double pi = 3.1416;
    scanf("%lf", &r);
    scanf("%lf", &h);
    area = 2 * pi * r * h + 2 * pi * r * r;
    printf("AREA=%.2lf \n", area);
    volumen = pi * r * r * h;
    printf("VOLUMEN=%.2lf", volumen);
    return 0;
}