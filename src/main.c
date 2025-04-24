#include <stdio.h>
#include "travail.h"




int main()
{
	char mots[MOTS_MAX][LONG_MAX];
	int nbMots = 0;
	chargerMots("ressource/bdd_wordle.txt", mots, &nbMots);
	char lettre;
	printf("Entrez une lettre pour filtrer les mots contenant cette lettre : ");
	scanf(" %c", &lettre);
	filtrerParLettre(mots, nbMots, lettre);
	return 0;
}
