#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main( int argc, char** argv )
{
    int restart = 0;
    const int MAX = 100, MIN = 1;


    do{

        //Generer un nombre aleatoire
        srand(time(NULL));
        int random = (rand() % (MAX - MIN + 1) + MIN), nombreEntree = 0;
        printf("\n\n----------- NOUVELLE PARTIE ------------\n\n\n");
        do {
            printf("Quelle est le nombre?????   : ");
            scanf("%d", &nombreEntree);
            if(random > nombreEntree) {
                printf("Ce nombre est plus grand \n");
            }else if(random < nombreEntree) {
                printf("Ce nombre est plus petit \n");
            }else {
                printf("Bravo vous avez finalement dévinezz!!!!!!!!!!!!\n");

            }

        } while(nombreEntree != random);

        //Ici l'utilisateur dit s'il veux recommencer ou non
        printf("Voulez vous recommencez la partie??\n");
        printf("1) pour oui et 2) pour non\n");
        scanf("%d", &restart);

    } while(restart);

    return 0;
}
