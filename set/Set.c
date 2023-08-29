#include "Set.h"

int size(struct set s) {
	return s.size;
}

bool isIn(struct set s, int x)
{
	for (int i = 0; i < size(s); i++) {
		if (x == s.elements[i]) {
			return true;
		}
	}

	return false;
}

bool isEmpty(struct set s) {
	int tam = size(s);

	if(!(tam)) {
		return true;
	}

	return false;
}

void startSet(struct set *s)
{
	srand(42);
	
	printf ("Tamanho do conjunto: ");
	do {
		scanf ("%d", &s->size);	
	} while (s->size > MAXSIZE);

	for (int i = 0; i < size(*s); i++) {
		s->elements[i] = MIN +rand() % (MAX - MIN + 1);
	}
}

void printSet(struct set s) {
	// verificar se S não-vazio antes de proceder...

	if ((isEmpty(s))) {
		printf ("Conjunto vazio! \n");
		return;
	}

	printf("Imprimindo conjunto:  ");
	for (int i = 0; i < s.size; i++)
		printf("%d ", s.elements[i]);

	printf("\n");
}	

void sortSet(struct set *s, int a, int b) 
{
    for (int i = 1; i < size(*s); i++) {
        
		int valor = s->elements[i];
        int j = i;

        while (j > 0 && s->elements[j - 1] > valor) {
            s->elements[j] = s->elements[j - 1];
            j--;
        }
 
        s->elements[j] = valor;
    }
}

void une(struct set *uniao, struct set s1, struct set s2) 
{
	int tamS1 = size(s1);
	int tamS2 = size(s2);
	
	int i = 0; /* Indice de s1.  	*/
	int j = 0; /* Indice de s2.    	*/
	int k = 0; /* Indice de uniao. 	*/

	sortSet(&s1, 0, size(s1));
	sortSet(&s2, 0, size(s2));

	while (i < tamS1 || j < tamS2) {
		if (i < tamS1 && (j >= tamS2 || s1.elements[i] <= s2.elements[j])) {
			uniao->elements[k] = s1.elements[i];
			i++;
		} else { 
			uniao->elements[k] = s2.elements[j];
			j++;
		}

		k++;
	}
}

void printUnion(struct set s1, struct set s2) 
{
	if ( (isEmpty(s1)) && (isEmpty(s2)) ) {
		printf ("Conjunto vazio! \n");
		return;
	}

	struct set u;
	u.size = size(s1) + size(s2);
	u.elements[size(u)];

	une(&u, s1, s2);
	sortSet(&u, 0, size(u));
	printSet(u);
}

void printIntersection(struct set s1, struct set s2) {
	// completar
	
	return;
}

void printDifference(struct set s1, struct set s2) {
	// completar
	
	return;
}
