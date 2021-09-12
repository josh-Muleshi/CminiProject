#ifndef ENREGISTREMENT_H_INCLUDED
#define ENREGISTREMENT_H_INCLUDED



typedef struct Tuteur
{
    char NumTuteur[50];
    char NomTuteur[50];
    char Profession[50];
    char TelTuteur[50];
} Tuteur;


typedef struct Etudiant
{
    char CodeEtu[50];
    char NomEtu[50];
    char PostnomEtu[50];
    int ageEtu ;
    char AdresseEtu[50];
    char Tel[50];
    char numTuteur[50];
} Etudiant;

void demandeDinfo();
void codeEtudiantCreation(Etudiant *etud);

#endif //ENREGISTREMENT_H_INCLUDED