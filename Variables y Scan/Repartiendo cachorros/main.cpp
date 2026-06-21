#include <iostream>
using namespace std;

int main()
{
    int cachorros, panchoCachorros, hijos, sobra, totalHijos;
    cin >> cachorros >> panchoCachorros >> hijos;

    cachorros = cachorros - panchoCachorros;

    totalHijos = cachorros / (hijos + 1);
    sobra = cachorros % (hijos + 1);
    panchoCachorros = panchoCachorros + sobra;

    cout << panchoCachorros << endl;
    return 0;
}