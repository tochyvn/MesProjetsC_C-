#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //Affichage
    int i;
    i = 0;
    printf("Hello world!f\nMy name is tochap %d", i);

    //Saisie de l'utilisateur
    int age = 0;

    //tant que tu n'es pas majeur demander l'âge
    do {
        printf("Quel age avez vous???\n");
        scanf("%d", &age);
        printf("\nVous n'êtes pas majeur!!!!!!\n", age);
    }while(age <= 18 || age >= 25);

/*
    if(age > 18 && age < 25) {
        printf("\nVous êtes majeur!!!!!!\n", age);
    }else if(age == 18) {
        printf("\nVous venez juste d'être majeur!!!\n", age);
    }else {
        printf("\nVous êtes mineur!!!\n", age);
    }
*/
    double absolu = 0, nombre = -27;
    absolu = fabs(nombre);
    absolu = pow(nombre, 2);
    printf("\nLa valeur absolu de %lf est %lf \n", nombre, absolu);
    /*
    while (1) {
        printf("\ntochap\n");
    }
    */


    return 0;
}
