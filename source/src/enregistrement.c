#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "../../header/main.h"
#include "../../header/include/enregistrement.h"
#include "../../header/include/fonctions.h"

void accueil_enregistrement(){
    
    printf("\n\n                               Enregistrement                          \n\n");
    printf("===============================================================================\n\n");

    demande();
}

void demande(){
    int choix;

    printf("\t\t 1. enregistrer\n");
    printf("\t\t 2. retour\n");
    scanf("%d", &choix);

    while (choix != 1 && choix != 2)
    {
        printf("Erreur ! tapez soit 1 pour enregistrer soit 2 pour retourner\n");
        scanf("%d", &choix);
    }

    if (choix == 1)
    {
        enregistrement();
    }else{
        accueil();
    }
}

/*----------------------------------------------------------------------------------------*/

void enregistrement(){
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
        demandeDinfo();
    }

    accueil();
    
}

/*----------------------------------------------------------------------------------------*/

void demandeDinfo(){
    char *etudiantEnregistree;
    char *tuteurEnregistree;
    Etudiant etudiant;
    Tuteur tuteur;

    printf("\t\t * Nom > ");
    scanf("%s", etudiant.NomEtu);
    printf("\t\t * Postnom > ");
    scanf("%s", etudiant.PostnomEtu);
    printf("\t\t * Age > ");
    scanf("%d", &etudiant.ageEtu);
    printf("\t\t * Adresse > ");
    scanf("%s", etudiant.AdresseEtu);
    printf("\t\t * Tel > ");
    scanf("%s", etudiant.Tel);

    printf("\n\t\t Tuteur ");
    printf("\n\t\t--------\n");
    printf("\t\t * Numero du Tuteur > ");
    scanf("%d", &tuteur.NumTuteur);
    printf("\t\t * Nom du Tuteur > ");
    scanf("%s", tuteur.NomTuteur);
    printf("\t\t * Profession du Tuteur > ");
    scanf("%s", tuteur.Profession);
    printf("\t\t * Tel du Tuteur > ");
    scanf("%s", tuteur.TelTuteur);
    printf("\n");

    etudiant.numTuteur = tuteur.NumTuteur;
    codeEtudiantCreation(&etudiant);

    /*Allocation de la memoire a chaineEnregistree*/
    etudiantEnregistree=(char*)malloc(sizeof(etudiant)+1);
    tuteurEnregistree=(char*)malloc(sizeof(tuteur)+1);
    /*Sortir une chaine de la forme Nom,prenom,age avec sprint*/
    sprintf(etudiantEnregistree,"%s %s %s %d %s %s %d\n", etudiant.CodeEtu, etudiant.NomEtu, etudiant.PostnomEtu, etudiant.ageEtu, etudiant.AdresseEtu, etudiant.Tel, etudiant.numTuteur);
    sprintf(tuteurEnregistree, "%d %s %s %s\n", tuteur.NumTuteur, tuteur.NomTuteur, tuteur.Profession, tuteur.TelTuteur);

    enregistrer_etudiant(etudiantEnregistree, strlen(etudiantEnregistree));
    enregistrer_tuteur(tuteurEnregistree, strlen(tuteurEnregistree));
    
    printf("\t\t %s %s %s %d %s %s %d\n\n", etudiant.CodeEtu, etudiant.NomEtu, etudiant.PostnomEtu, etudiant.ageEtu, etudiant.AdresseEtu, etudiant.Tel, etudiant.numTuteur);

}

/*----------------------------------------------------------------------------------------*/

void codeEtudiantCreation(Etudiant *etudiant){
    
    char x[50];
    char y[50];
    char chaine[30];
    char * chaine2;
    int i = 2;
    int lenth,j,h,k;

    strcpy(x, etudiant->NomEtu);
    strncat(chaine, x, i);
    for ( k = 0, h = 0; k < strlen(etudiant->NomEtu);h++, k++)
    {
        chaine[k] = chaine[h];
    }
    
    lenth = strlen(etudiant->PostnomEtu);
    for (j = 0, h = 2; j <= 2; h--, j++)
    {
        y[j] = etudiant->PostnomEtu[lenth - h];
    }
    strcat(chaine, y);

    chaine2 = (char*)malloc(sizeof(etudiant)+1);
    sprintf(chaine2,"%s%d",chaine, etudiant->ageEtu);

    strcpy(etudiant->CodeEtu, chaine2);
    
}

/*int main(){
    enregistrement();
    return 0;
}*/