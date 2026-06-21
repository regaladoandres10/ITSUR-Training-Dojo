#include <stdio.h>
#include <math.h>

int main()
{
    int a; scanf("%d", &a);
    double volumen = (0.25)*(15+7*sqrt(5))*(a*a*a);
    printf("%.2f", volumen);
    return 0;
}