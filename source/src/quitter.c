#include <stdio.h>
#include <stdlib.h>
#include "../../header/main.h"
#include "../../header/include/quitter.h"

void quitter(){
    int choix;
    //Booleen booleen;

    printf("\n\t Voulez-vous vraiment quitter ? [0/1] > ");
    scanf("%d", &choix);

    switch (choix)
    {
        case 0: exit(1);
            break;

        case 1: accueil;
            break;
        
        default: exit(1);
            break;
    }

}