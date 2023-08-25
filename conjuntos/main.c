#include <stdio.h>
#include "conjuntos.h"

int main()
{
	int conjunto1[MAXTAM + 1];
	int conjunto2[MAXTAM + 1];
	iniciaVazio(conjunto1);
	iniciaVazio(conjunto2);

	criaConjunto(conjunto1);
	criaConjunto(conjunto2);

	if (uniao(conjunto1, conjunto2)) {
		printf ("A uniao foi efetiva! \n");
	}

	if (intersec(conjunto1, conjunto2)) {
		printf("Ah interseccao! \n");
	}

	return 0;
}

