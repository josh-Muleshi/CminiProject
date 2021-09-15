#include <stdio.h>
#include <stdlib.h>
#include "../../header/include/fonctions.h"
#define LGMAX 81

void lire_fichier(int * choix)
{
    FILE * lireFile=NULL;
    char * nomfichier;
    
    nomfichier=(char *)malloc(50);

    if (*choix == 1)
    {
        lireFile = fopen ("../../db/etudiant_data.txt", "r");
        nomfichier = "Etudiant";
    }else if (*choix == 2)
    {
        lireFile = fopen ("../../db/parent_data.txt", "r");
        nomfichier = "Tuteur";
    }
    else
    {
        lireFile = fopen ("../../db/etudiant_data.txt", "r");
        nomfichier = "Etudiant par Tuteur";
    }

    show(lireFile, nomfichier);
}

/*----------------------------------------------------------------------------------------*/

void show(FILE * lireFile, char * nomfichier){

    int num = 1; /*numero ligne*/
    char ligne [LGMAX]; /* tampon d une ligne */

    if(lireFile==NULL)
    {
        printf("Fichier introuvable");
        exit(0);
    }
    printf ("\t\t                 liste %s\n", nomfichier);
    printf("\t\t**********************************************\n\n");
    while ( fgets (ligne, LGMAX, lireFile) ) /*tant qu'il y aura du contenu dans le fichier */
    { 
        printf ("\t\t %5d ", num++);
        printf ("%s", ligne);
    }
}

/*----------------------------------------------------------------------------------------*/

void enregistrer_etudiant(char * chaine, int tailleChaine)
{
    FILE *etuFile = fopen ("../../db/etudiant_data.txt", "a");
    fwrite (chaine,tailleChaine, 1, etuFile);
    fclose (etuFile);
}

/*----------------------------------------------------------------------------------------*/

void enregistrer_tuteur(char * chaine, int tailleChaine)
{
    FILE *tutFile = fopen ("../../db/parent_data.txt", "a");
    fwrite (chaine,tailleChaine, 1, tutFile);
    fclose (tutFile);
}