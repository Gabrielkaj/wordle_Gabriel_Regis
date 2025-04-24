#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "travail.h"



void chargerMots(const char* nomFichier, char mots[MOTS_MAX][LONG_MAX], int* nbMots)
{
	FILE* fichier = fopen("../ressource/bdd_wordle_clean.txt", "r");
	if (fichier == NULL)
	{
		printf("Erreur lors de l'ouverture du fichier\n");
		exit(EXIT_FAILURE);
	}
	char ligne[LING_MAX];
	*nbMots = 0;
	while (fgets(ligne, LING_MAX, fichier) != NULL)
	{
		ligne[strcspn(ligne, "\n")] = 0;
		if (strlen(ligne) > 0 && *nbMots < MOTS_MAX)
		{
			strncpy(mots[*nbMots], ligne, LONG_MAX);
			(*nbMots)++;
		}
	}
	fclose(fichier);
}




void filtrerParLettre(char mots[MOTS_MAX][LONG_MAX], int nbMots, char lettre)
{
	printf("\nMots contenant la lettre '%c' :\n", lettre);
	for (int i = 0; i < nbMots; i++)
	{
		if (strchr(mots[i], lettre))
		{
			printf("%s\n", mots[i]);
		}
	}
}
