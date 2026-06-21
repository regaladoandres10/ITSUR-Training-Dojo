#include <stdio.h>

int main()
{
    int nHachas, hTalentos, mEspadas, eTalentos, total;
    scanf("%d", &nHachas);
    scanf("%d", &hTalentos);
    scanf("%d", &mEspadas);
    scanf("%d", &eTalentos);
    total = (nHachas * hTalentos) + (mEspadas * eTalentos);
    printf("%d", total);
    return 0;
}