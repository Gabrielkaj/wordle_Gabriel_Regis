# wordle_Gabriel_Regis


Ce petit programme en C permet de charger une liste de mots depuis un fichier texte, puis de filtrer et afficher les mots contenant une lettre donnée par l'utilisateur.

## Fonctionnalités

- Chargement d’un fichier de mots (`bdd_wordle.txt`)

- Filtrage des mots contenant une lettre spécifique

- Affichage des mots correspondants

## Structure du projet

```bash

.

├── wordle_solver.h       # Fichier d'en-tête (déclarations des fonctions)

├── wordle_solver.c       # Implémentation des fonctions

├── main.c                # Fonction principale

├── bdd_wordle.txt        # Fichier contenant la liste des mots

└── README.md             # Documentation du projet 



#Compilation

mkdir bin
cd bin
gcc-o  main.c -I ../src/travail.c -o ../src/main.c


#Execution

./main
