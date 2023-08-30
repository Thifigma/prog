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

bool isEmpty(struct set s) 
{

	if(!(size(s))) {
		return true;
	}

	return false;
}

void startSet(struct set *s)
{
	srand(time(NULL));
	
	
	do {
		scanf("%d", &s->size); 	
	} while (s->size > MAXSIZE);

	for (int i = 0; i < size(*s); i++) {
		s->elements[i] = MIN +rand() % (MAX - MIN + 1);
	}

	return;
}

void printSet(struct set s) 
{
	// verificar se S não-vazio antes de proceder...

	if ((isEmpty(s))) {
		printf ("Conjunto vazio! \n");
		return;
	}

	printf("Imprimindo conjunto:  ");
	for (int i = 0; i < s.size; i++)
		printf("%d ", s.elements[i]);

	printf("\n");
	return;
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

    return;
}

/*Percorre os dois vetores fazendo comparações entre os elementos. 
 */ 
void une(struct set *uniao, struct set s1, struct set s2) 
{
	int i = 0; /* Indice de s1.  	*/
	int j = 0; /* Indice de s2.    	*/
	int k = 0; /* Indice de uniao. 	*/

	sortSet(&s1, 0, size(s1));
	sortSet(&s2, 0, size(s2));

	while (i < size(s1) || j < size(s2)) {
		if (i < size(s1) && (j >= size(s2) || s1.elements[i] <= s2.elements[j])) {
			uniao->elements[k] = s1.elements[i];
			i++;
		} else { 
			uniao->elements[k] = s2.elements[j];
			j++;
		}

		k++;
	}

	return;
}

void printUnion(struct set s1, struct set s2) 
{
	struct set u;
	u.size = size(s1) + size(s2);
	u.elements[size(u)];

	une(&u, s1, s2);
	sortSet(&u, 0, size(u));

	printf ("Uniao "); printSet(u); printf ("\n");
	return;
}

void printIntersection(struct set s1, struct set s2) 
{
	int i = 0; /*Indice de s1. */
	int j = 0; /*Incide de s2. */
	int k = 0; /*Indice de intersecção. */
	
	struct set intersec;
 	intersec.size = (size(s1) + size(s2));
	intersec.elements[size(intersec)];

	sortSet(&s1, 0, size(s1));
	sortSet(&s2, 0, size(s2));

	while (i < size(s1) && j < size(s2)) {
		if (s1.elements[i] == s2.elements[j]) {
			intersec.elements[k] = s1.elements[i];
			k++;
		}

		i++;
		j++;
	}

	intersec.size = k;
	intersec.elements[k];

	printf("Interseccao "); printSet(intersec); printf ("\n");	
	return;
}

void printDifference(struct set s1, struct set s2) 
{
	// completar
	
	int i = 0; /*Indice de s1. */
	int j = 0; /*Incide de s2. */
	int k = 0; /*Indice de intersecção. */
	
	struct set dif;
 	dif.size = (size(s1) + size(s2));
	dif.elements[size(dif)];

	sortSet(&s1, 0, size(s1));
	sortSet(&s2, 0, size(s2));

	while (i < size(s1) && j < size(s2)) {
		if (s1.elements[i] != s2.elements[j]) {
			dif.elements[k] = s1.elements[i];
			k++;
			dif.elements[k] = s2.elements[j];
			k++;
		}

		i++;
		j++;
	}
	
	dif.size = k;
	dif.elements[k];
	
	sortSet(&dif, 0, size(dif));
	printf("Diferenca "); printSet(dif); printf("\n");	
	return;
}

	/*s1 é subconjunto de s2 se, e somente se, todo elemento de s1, 
	 * pertencer a s2.  
	 */
bool isSubset(struct set s1, struct set s2)
{

	int i = 0; 		/*Indice de s1. */
	int j = 0; 		/*Indice de s2. */
	bool pertence  = false; /*Controle de pertencimento. */

	/* A verificação de cada i de s1 vai ser feita para todo s2
	 */
	for (int i = 0; i < size(s1); i++) { 
		pertence = false;
		for (int j = 0; j < size(s2); j++) { 
			if (s1.elements[i] == s2.elements[j])
				pertence = true;
		}
		

	/* Como a variavel não foi alterada, significa que 
	 * pelo menos 1 elemento de s1 não pertence a s2, logo, não é subconjunto.
	 */
		if (pertence == false) { 
			return false;
		}

		i++;
	}
	
	return pertence;
}
