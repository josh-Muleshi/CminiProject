#include <stdio.h>
#include <string.h>
#include "../../header/include/enregistrement.h"

void enregistrement(){

    int nbrEnregistre, i;

    printf("\n\n                               Enregistrement                          \n\n");
    printf("===============================================================================\n\n");

    printf("\t combient d'etudiants voulez-vous enregistrez ? > ");
    scanf("%d", &nbrEnregistre);

    while (nbrEnregistre < 1)
    {
        printf("\t Erreur ! le numero doit-etre un entier supeur non nul > ");
        scanf("%d", &nbrEnregistre);
    }

    for (i = 1; i <= nbrEnregistre; i++)
    {
        demandeDinfo();
        
    }
    

}

void demandeDinfo(){
    Etudiant etudiant;
    Tuteur tuteur;

    printf("\t\t * Nom > ");
    scanf("%s", etudiant.NomEtu);
    printf("\n");
    printf("\t\t * Postnom > ");
    scanf("%s", etudiant.PostnomEtu);
    printf("\n");
    printf("\t\t * Age > ");
    scanf("%d", &etudiant.ageEtu);
    printf("\n");
    printf("\t\t * Adresse > ");
    scanf("%s", etudiant.AdresseEtu);
    printf("\n");
    printf("\t\t * Tel > ");
    scanf("%s", etudiant.Tel);
    printf("\n");
    printf("\t\t * Nom du Tuteur > ");
    scanf("%s", tuteur.NomTuteur);
    printf("\n");
    printf("\t\t * Profession du Tuteur > ");
    scanf("%s", tuteur.Profession);
    printf("\n");
    printf("\t\t * Tel du Tuteur > ");
    scanf("%s", tuteur.TelTuteur);
    printf("\n");

    codeEtudiantCreation(&etudiant);

    printf("%s %s %s %d %s %s\n", etudiant.CodeEtu, etudiant.NomEtu, etudiant.PostnomEtu, etudiant.ageEtu, etudiant.AdresseEtu, etudiant.Tel);


}

void codeEtudiantCreation(Etudiant *etudiant){
    
    char x[50];
    char y[50];
    char chaine[30];
    char chaine2[200];
    int i = 2;

    strcpy(x, etudiant->NomEtu);
    strcpy(y, etudiant->PostnomEtu);

    strncat(chaine, x, i);
    strncat(chaine + i, y, i);

    sprintf(chaine2,"%s%d",chaine, etudiant->ageEtu);

    strcpy(etudiant->CodeEtu, chaine2);
}

int main(){
    enregistrement();
    return 0;
}