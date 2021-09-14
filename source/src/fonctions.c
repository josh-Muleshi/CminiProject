#include <stdio.h>
#include "../../header/include/fonctions.h"
#define LGMAX 81
void lire_etudiant()
{
    FILE * fluxFichier=NULL;
    fluxFichier = fopen ("nomFichier", "r") ;
    int num = 1 ; /*numero ligne*/
    char ligne [LGMAX] ; /* tampon dune ligne */
    fluxFichier = fopen ("nomFichier", "r") ;
    if(fluxFichier==NULL)
    {printf("Fichier introuvable");
     exit(0);
    }
    printf (" **** liste du fichier %s ****\n", "nomFichier") ;
    while ( fgets (ligne, LGMAX, fluxFichier) ) /*tant qu'il y aura du contenu dans le fichier */
        { printf ("%5d ", num++);
        printf ("%s", ligne) ;
    }
}
void lire_tuteur()
{
    FILE * fluxFichier=NULL;
    fluxFichier = fopen ("nomFichier", "r") ;
    int num = 1 ; /*numero ligne*/
    char ligne [LGMAX] ; /* tampon dune ligne */
    fluxFichier = fopen ("nomFichier", "r") ;
    if(fluxFichier==NULL)
    {printf("Fichier introuvable");
     exit(0);
    }
    printf (" **** liste du fichier %s ****\n", "nomFichier") ;
    while ( fgets (ligne, LGMAX, fluxFichier) ) /*tant qu'il y aura du contenu dans le fichier */
        { printf ("%5d ", num++);
        printf ("%s", ligne) ;
    }
}

void enregistrer_etudiant(char * chaine, int tailleChaine)
{
    FILE *etuFile = fopen ("", "a") ;
    fwrite (chaine,tailleChaine, 1, etuFile) ;
    fclose (etuFile) ;
}


void enregistrer_tuteur(char * chaine, int tailleChaine)
{
    FILE *tutFile = fopen ("", "a") ;
    fwrite (chaine,tailleChaine, 1, tutFile) ;
    fclose (tutFile) ;
}