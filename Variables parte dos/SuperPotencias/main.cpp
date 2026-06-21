#include <stdio.h>
#include <math.h>

int main()
{
    long long a, b, c, pot = 0, superPot = 0;
    scanf("%lld %lld %lld", &a, &b, &c);
    pot = pow(b,c);
    superPot = pow(a, pot);
    printf("%lld", superPot);
    return 0;
}