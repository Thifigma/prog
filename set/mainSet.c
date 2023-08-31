/* Nome: Thiago Figueiredo Marcos
 * GRR: 20205982 
 */


#include "Set.h"

int main() {
	struct set conj1, conj2;
	int x = 42;

	/* criar código que preenche os membros vetores, chamados de "elements", 
	 * dos conjuntos 1 e 2, com um N passado pelo usuário, desde que N 
	 * respeite o tamanho máximo pré-definido. Dica: use srand com 
	 * a semente fixa abaixo. 
	 */

	srand(time(NULL));
	

	do {
		conj1.size = MIN +rand() % (MAX - MIN + 1);	
	} while (conj1.size > MAX);

	for (int i = 0; i < size(conj1); i++) {
		conj1.elements[i] = MIN +rand() % (MAX - MIN + 1);
	}


	do {
		conj2.size = MIN +rand() % (MAX - MIN + 1);
	} while (conj2.size > MAX);

	for (int i = 0; i < size(conj2); i++) {
		conj2.elements[i] = MIN +rand() % (MAX - MIN + 1);
	}

	printf("Conjunto1 ");  printSet(conj1); 
	printf("Conjunto2 ");  printSet(conj2); printf ("\n");

	printUnion(conj1, conj2);
	printIntersection(conj1, conj2);
	printDifference(conj1, conj2);
	
	if (isSubset(conj1, conj2))
		printf ("s1 pertence a s2\n");
	else
		printf ("s1 nao pertence a s2\n"); 

	printf ("Ordenação \n");

	sortSet(conj1);
	sortSet(conj2);

	printf("\n");

	printf("X = %d\n", x);
	if (isIn(conj1, x) || isIn(conj2, x))
		printf("X esta \n");
	else
		printf("X nao esta. \n");

	return 0;
}
