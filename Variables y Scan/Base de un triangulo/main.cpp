#include <stdio.h>

int main()
{
    int area, altura, base;
    scanf("%d", &area);
    scanf("%d", &altura);
    base = 2 * altura / area;
    base = base / 2;
    printf("%d", base);

    return 0;
}