#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../../header/main.h"
#include "../../header/include/quitter.h"

void quitter(){

    char choix;
    Booleen booleen;

    printf("voulez-vous vraiment quitter ? [O/Y]\n");
    gets(choix);

    switch (booleen)
    {
    case O: exit(1);
        break;

    case N: accueil;
        break;
    
    default: exit(1);
        break;
    }

}