#include <stdio.h>

int main(int argc, char *argv[]) {

    double a1, b1, c1, a2, b2, c2, formulaY1 = 0, formulaY2 = 0, y = 0, x1 = 0, x = 0;
    scanf("%lf %lf %lf %lf %lf %lf", &a1, &b1, &c1, &a2, &b2, &c2);
    formulaY1 = (a2 * c1) - (a1 * c2);
    formulaY2 = (a2 * b1) - (a1 * b2);
    y = formulaY1 / formulaY2;
    x1 = c2 - (b2 * y);
    x = x1 / a2;
    printf("%lf %lf", x, y);
    return 0;
}