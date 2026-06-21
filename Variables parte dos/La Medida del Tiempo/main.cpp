#include <stdio.h>

int main()
{
    int segundos,d = 0, h = 0, m = 0, q = 0, converSegMinu = 0, convertMinHoras = 0, convertHorasDias = 0, anio = 0;
    scanf("%d", &segundos);
    converSegMinu = segundos / 60;
    convertMinHoras = converSegMinu / 60;
    convertHorasDias = convertMinHoras / 24;
    anio = convertHorasDias / 365;
    d = convertHorasDias % 365;
    h = convertMinHoras % 24;
    m = converSegMinu % 60;
    q = segundos % 60;
    printf("%d %d %d %d %d", anio, d, h, m, q);
    return 0;
}