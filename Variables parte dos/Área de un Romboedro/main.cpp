#include <stdio.h>

int main()
{
    int diagMayor, diagMenor;
    double area1 = 0, area2 = 0;
    scanf("%d %d", &diagMayor, &diagMenor);
    area1 = (diagMayor * diagMenor) / 2.0;
    area2 = area1 * 6;
    printf("Area = %.0f", area2);
    return 0;
}