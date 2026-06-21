#include <stdio.h>

int main()
{
    int g1, c1, p1, t1, o1, g2, c2, p2, t2, o2;
    int convertOnzaTaza = 0, convertTazaPinta = 0, convertPintaCuarta = 0, convertCuartaGalon = 0;
    scanf("%d %d %d %d %d", &g1, &c1, &p1, &t1, &o1);
    convertOnzaTaza = o1 / 8;
    o2 = o1 % 8;
    convertTazaPinta = (convertOnzaTaza + t1) / 2;
    t2 = (convertOnzaTaza + t1) % 2;
    convertPintaCuarta = (convertTazaPinta + p1) / 2;
    p2 = (convertTazaPinta + p1) % 2;
    convertCuartaGalon = (convertPintaCuarta + c1) / 4;
    c2 = (convertPintaCuarta + c1) % 4;
    g2 = convertCuartaGalon + g1;
    printf("%d %d %d %d %d", g2,c2,p2,t2,o2);
    return 0;
}