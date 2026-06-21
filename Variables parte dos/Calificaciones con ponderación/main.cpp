#include <stdio.h>
#include <math.h>

int main()
{
    int exam, tar, asis; double caliTotal = 0;
    scanf("%d %d %d", &exam, &tar, &asis);
    caliTotal = (exam * 0.6)+(tar * 0.3) + (asis * 0.1);
    caliTotal = round(caliTotal);
    printf("%.0f\n", caliTotal);
    return 0;
}