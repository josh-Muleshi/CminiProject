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
    printf("\t\t 4. retour\n");
    scanf("%d", &choix);

    while (choix != 1 && choix != 2 && choix != 3 && choix != 4)
    {
        printf("Erreur ! tapez un chiffre selon les items ci-haut\n");
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1: afficher_etudian();
            break;

        case 2: afficher_tuteur();
            break;

        case 3: afficher_etudian_par_tuteur();
            break;

        case 4: accueil();
            break;
    
        default: printf("Erreur !");
            break;
    }
}

/*----------------------------------------------------------------------------------------*/

void afficher_etudian(){
    int nbrEnregistre, i;
    
    printf("\t combient d'etudiants voulez-vous enregistrez ? > ");
    scanf("%d", &nbrEnregistre);
    printf("\n");

    while(nbrEnregistre < 1){
        printf("\t Erreur ! le numero doit-etre un entier supeur non nul > ");
        scanf("%d", &nbrEnregistre);
        printf("\n");
    }

    for (i = 1; i <= nbrEnregistre; i++)
    {
        //demandeDinfo();
    }

    //demande();
    
}

void afficher_tuteur(){
    int nbrEnregistre, i;
    
    printf("\t combient d'etudiants voulez-vous enregistrez ? > ");
    scanf("%d", &nbrEnregistre);
    printf("\n");

    while(nbrEnregistre < 1){
        printf("\t Erreur ! le numero doit-etre un entier supeur non nul > ");
        scanf("%d", &nbrEnregistre);
        printf("\n");
    }

    for (i = 1; i <= nbrEnregistre; i++)
    {
        //demandeDinfo();
    }

    //demande();
    
}

void afficher_etudian_par_tuteur(){
    int nbrEnregistre, i;
    
    printf("\t combient d'etudiants voulez-vous enregistrez ? > ");
    scanf("%d", &nbrEnregistre);
    printf("\n");

    while(nbrEnregistre < 1){
        printf("\t Erreur ! le numero doit-etre un entier supeur non nul > ");
        scanf("%d", &nbrEnregistre);
        printf("\n");
    }

    for (i = 1; i <= nbrEnregistre; i++)
    {
        //demandeDinfo();
    }

    //demande();
    
}