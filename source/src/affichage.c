#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../../header/main.h"
#include "../../header/include/affichage.h"
#include "../../header/include/fonctions.h"

void accueil_affichage(){
    int choix;
    
    printf("\n\n                           Affichage de donnees                           \n\n");
    printf("===============================================================================\n\n");

    printf("\t\t 1. Afficher les etudiants\n");
    printf("\t\t 2. Afficher les tuteur\n");
    printf("\t\t 3. Afficher les etudiants par tuteur\n");
    printf("\t\t 4. Retour\n");
    printf("\t\t > ");
    scanf("%d", &choix);

    while (choix != 1 && choix != 2 && choix != 3 && choix != 4)
    {
        printf("\t\t Erreur ! tapez un chiffre selon les items ci-haut > ");
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1: lire_fichier(&choix);
            break;

        case 2: lire_fichier(&choix);
            break;

        case 3: lire_fichier(&choix);
            break;

        case 4: accueil();
            break;
    
        default: printf("\t\t Erreur !\n");
            break;
    }

    retour();

}

/*----------------------------------------------------------------------------------------*/

void retour(){
    int choix;

    printf("\n");
    printf("\t\t 1. Afficher\n");
    printf("\t\t 2. Retour\n");
    printf("\t\t > ");
    scanf("%d", &choix);

    while (choix != 1 && choix != 2)
    {
        printf("\t\t Erreur ! tapez soit 1 pour Afficher soit 2 pour retourner > ");
        scanf("%d", &choix);
    }

    if (choix == 1)
    {
        accueil_affichage();
    }else{
        accueil();
    }
}
