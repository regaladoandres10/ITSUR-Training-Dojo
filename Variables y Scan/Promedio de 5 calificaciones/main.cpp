#include <stdio.h>

int main()
{
    double cal1, cal2, cal3, cal4, cal5, suma, promedio;
    scanf("%lf", &cal1);
    scanf("%lf", &cal2);
    scanf("%lf", &cal3);
    scanf("%lf", &cal4);
    scanf("%lf", &cal5);
    suma = cal1 + cal2 + cal3 + cal4 + cal5;
    promedio = suma / 5;
    printf("%.1lf", promedio);

    return 0;
}