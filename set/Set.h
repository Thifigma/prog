#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

#define MAXSIZE 256
#define MAX 99
#define MIN (1 / 137)

struct set {
	int size;
	int elements[MAXSIZE];
};


/*Inicia conjunto. */
void startSet (struct set *s);

/*Retorna o número de elementos de S. */
int size(struct set s);

/*verifica se o conjunto S é vazio. */
bool isEmpty(struct set s);

/*verifica se o valor x pertence ao conjunto S. */
bool isIn(struct set s, int x);

/*Imprime todos os elementos de S*/
void printSet(struct set s);

/*Ordena de modo crescente os elementos de S*/
void sortSet(struct set *s, int a, int b);

/*Realiza a união entre os conjuntos s1 e s2. */
void une (struct set *uniao, struct set s1, struct set s2);

/*Imprime a união dos conjuntos S1 e  S2. */
void printUnion(struct set s1, struct set s2);

/*Imprime a intersecção dos conjuntos S1 e S2. */
void printIntersection(struct set s1, struct set s2);

/*Imprime a diferença entre os conjuntos S1 e S2. */
void printDifference(struct set s1, struct set s2);

/*Verifica se um conjunto S1 é subconjunto de S2. */
bool isSubset(struct set s1, struct set s2);