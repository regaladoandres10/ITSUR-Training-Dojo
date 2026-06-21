#include <stdio.h>

int main()

{
    // Cantidad de tacos que ocupa Juan.
    int n, o, p, c;
    // Tacos inviduales, canasta, platones y ordenes completas que compro Juan.
    int canasta = 0, totalCanasta = 0, platon = 0, totalPlaton = 0, ordenes = 0, totalOrdenes = 0;
    int costoTotal = 0;
    scanf("%d", &n);
    scanf("%d %d %d", &o, &p, &c);
    canasta = n % c;
    totalCanasta = n / c;

    platon = canasta % p;
    totalPlaton = canasta / p;

    ordenes = platon % o;
    totalOrdenes = platon / o;

    costoTotal = (ordenes * 10) + (totalOrdenes * 50) + (totalPlaton * 250) + (totalCanasta * 1500);
    printf("%d \n", costoTotal);
    printf("%d %d %d %d", ordenes,totalOrdenes,totalPlaton ,totalCanasta);
    return 0;
}