#include <stdio.h>

int main()
{
    int tamalesRobados, miembrosBanda, lider = 0, tamalesTotales = 0, sobra = 0, sobra2 = 0, totalMiembros = 0;
    scanf("%d %d", &tamalesRobados, &miembrosBanda);

    totalMiembros = miembrosBanda - 1;
    lider = tamalesRobados / 2;
    sobra = tamalesRobados % 2;
    lider = lider + sobra;

    tamalesTotales = tamalesRobados - lider;
    miembrosBanda = tamalesTotales / totalMiembros;
    sobra2 = tamalesTotales % totalMiembros;
    lider = lider + sobra2;
    printf("%d", lider);
    return 0;
}