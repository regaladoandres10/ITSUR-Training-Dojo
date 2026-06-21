#include <stdio.h>

int main()
{
    int s, tSeg = 0, tMin = 0, tHora = 0, convertSM = 0, convertMH = 0, convertHD = 0;
    scanf("%d", &s);
    convertSM = s / 50;
    tSeg = s % 50;
    convertMH = convertSM / 70;
    tMin = convertSM % 70;
    convertHD = convertMH / 12;
    tHora = convertMH % 12;
    printf("%d %d %d %d", convertHD,tHora ,tMin ,tSeg);
    return 0;
}