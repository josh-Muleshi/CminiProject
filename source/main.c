/*
* File name : main.c
*
* Description : le point d'entrer de notre programme
*
* Author :
*
* Cedric
* Aaron
* Grace
* Gloire
* josh
*
* Package name : Kalopeto/source/main.c
*/
#include <stdio.h>
#include "../header/main.h"

int main(){

    printf("\t----------------------------------------------------------------\n");
    printf("\t|                     gestion des etudiants                    |\n");
    printf("\t----------------------------------------------------------------\n\n");

    printf("\t bienvenu dans kalopeto une app pour la gestion des etudiants\n\n");
    printf("\t Entrez le numero d'item pour effectuer l'action correspondente\n\n");

    printf("\t\t1. Enregistrement\n");
    printf("\t\t2. Affichage des données\n");
    printf("\t\t3. Quitter l’application\n\n");

    item_Choix();

    printf("\t----------------------------------------------------------------\n\n");
    return 0;
}

void item_Choix(){
    int choix;

    printf("\t Tapez le numero ici > ");
    scanf("%d", &choix);

    while (choix < 1 || choix > 3)
    {
        printf("\t Erreur ! le numero doit-etre entre 1 et 3 compris > ");
        scanf("%d", &choix);
    }

    switch (choix)
    {
        case 1: printf("\t Enregistrement\n");
            break;

        case 2: printf("\t Affichage\n");
            break;

        case 3: printf("\t Quitte\n");
            break;
    
    default: printf("\t erreur\n");
        break;
    }
    
}