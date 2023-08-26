#include "Set.h"

int main() {
	struct set conj1, conj2;
	int x;

	/* criar código que preenche os membros vetores, chamados de "elements", 
	 * dos conjuntos 1 e 2, com um N passado pelo usuário, desde que N 
	 * respeite o tamanho máximo pré-definido. Dica: use srand com 
	 * a semente fixa abaixo. */

	startSet(&conj1);
	startSet(&conj2);

	srand(42);
	// use as demanis funções para imprimir as operações...

	printSet(conj1);
	printSet(conj2);


	printUnion(conj1, conj2);


	/*
	do {

		
		printf("Digite X natural para verificar se X pertence ao conjunto 1 ou 2\n");
		scanf("%d", &x);

		printUnion(conj1, conj2);

		/* Continue o código, mostrando ao usuário se X pertence a um, ambos ou 
		 * nenhum dos conjuntos, se X for um número natural válido 
        
	} while (x >= 0); */


	return 0;
}