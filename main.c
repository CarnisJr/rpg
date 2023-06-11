#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include "funciones.h"


int main(void){

    //Definir variables
    int sed = 15, hambre = 15, numDias = 1, vida = 100;
    char selector, selectorMenuPrincipal;
    srand(time(NULL));

    //Menú de inicio
    do{
        printf("\n---BIENVENIDO A LAS MONTANIAS DE LA LOCURA---\n\n");
        printf("1. Iniciar partida\n2. Creditos\n3. Salir\n\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &selectorMenuPrincipal);
        printf("\n");
        if(isdigit(selectorMenuPrincipal) != 1 || selectorMenuPrincipal > 51){
            printf("Error\n");
        }
        system("pause");
        system("cls");
        fflush(stdin);
            
        switch (selectorMenuPrincipal)
        {
        case 49:
            interfaz(selector, vida, sed, hambre, numDias);
            selectorMenuPrincipal = 1;
            break;
        case 50:
            creditos();
            break;
        case 51:
            printf("\n---HASTA LA PROXIMA DEBIL HUMANO---\n\n");
            system("pause");
            exit(EXIT_SUCCESS);
            break; 
        default:
            system("cls");
            break;
        }
    
    }while(isdigit(selectorMenuPrincipal) != 1 || selectorMenuPrincipal > 51);


    return 0;
}