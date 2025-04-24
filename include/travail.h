#ifndef WORDLE_SOLVER_H
#define WORDLE_SOLVER_H
#define LING_MAX 512
#define MOTS_MAX 1000
#define LONG_MAX 10


void chargerMots(const char* nomFichier, char mots[MOTS_MAX][LONG_MAX], int* nbMots);

void filtrerParLettre(char mots[MOTS_MAX][LONG_MAX], int nbMots, char lettre);

#endif
