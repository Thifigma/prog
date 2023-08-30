#include "Set.h"

int main() {
	struct set conj1, conj2;

	/* criar código que preenche os membros vetores, chamados de "elements", 
	 * dos conjuntos 1 e 2, com um N passado pelo usuário, desde que N 
	 * respeite o tamanho máximo pré-definido. Dica: use srand com 
	 * a semente fixa abaixo. */

	startSet(&conj1);
	startSet(&conj2);

	sortSet(&conj1, 0, size(conj1));
	sortSet(&conj2, 0, size(conj2));

	printf("Conjunto1 ");  printSet(conj1); 
	printf("Conjunto2 ");  printSet(conj2); printf ("\n");

	printUnion(conj1, conj2);
	printIntersection(conj1, conj2);
	printDifference(conj1, conj2);

	if (isSubset(conj1, conj2))
		printf ("s1 pertence a s2\n");
	else
		printf ("s1 nao pertence a s2\n"); 
	
	return 0;
}
