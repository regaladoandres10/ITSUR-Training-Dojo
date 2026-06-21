#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	int nDados, valorInferior = 0, valorSuperior = 0;
	scanf("%d", &nDados);
	valorInferior = 14 * nDados + 1;
	valorSuperior = 14 * nDados + 6;
	printf("%d %d", valorInferior, valorSuperior);
	return 0;
}