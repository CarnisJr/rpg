#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

//Definir constantes
#define MAX_DIAS 10
#define MAX_SED 100
#define MAX_HAMBRE 100
#define MAX_SALUD 100
#define MAX_CHANCE 100

//Despliegue del menú de acciones
void interfaz(char selector, int vida, int sed, int hambre, int numDias){
    
    //Variables
    int chance;
    //Declarar funciones
    char validacionDeOpcion(int numDias);
    void estadisticasFinales(int vida, int sed, int hambre);
    int comprobarEstadistica(int vida, int constante);


    do{

        selector = validacionDeOpcion(numDias);
        chance = rand() % MAX_CHANCE + 1;
         
        if(vida >= 100){
            printf("\nTu salud esta al maximo, no puedes descansar\n\n");
            system("pause");
            system("cls");
            selector = 0;
        }

        if(sed <= 0){
            printf("\nEstas completamente hidratdo, no puedes puedes ir a buscar agua\n\n");
            system("pause");
            system("cls");
            selector = 0;
        }

        if(hambre <= 0){
            printf("\nNo estas hambriento, no puedes puedes ir a cazar\n\n");
            system("pause");
            system("cls");
            selector = 0;
        }

        printf("Sus estadisticas actuales son\n\n");
        estadisticasFinales(vida, sed, hambre);

        switch (selector)
        {
        case 49:                                        //49 = '1'
            printf("\nDecidiste descansar. Tu salud aumenta en 10 puntos de salud\n\n");
            vida += 10;
            vida = comprobarEstadistica(vida, MAX_SALUD);
            system("pause");
            system("cls");
            break;
        case 50:                                        //48 = '2'
            printf("\nTe adentras en el bosque en busca de agua...\n\n");
            if(chance >= 0 && chance <= 20){
                printf("Encuentras un arroyo. La sed se reduce en 25 unidades...\n\n");
                sed -= 25;
            }
            if(chance > 20 && chance <= 55){
                printf("Encuentras varias botellas de agua casi vacias. La sed se reduce en 5 unidades...\n\n");
                sed -= 5;
            }
            if(chance > 55 && chance <= 100){
                printf("Sufres un ataque de un animal desconocido. Tu salud se reduce en 5 unidades...\n\n");
                vida -= 5;
            }
            sed = comprobarEstadistica(sed, MAX_SED);
            system("pause");
            system("cls");
            break;
        case 51:                                        //51 = '3'
            printf("\nTe adentras en el bosque en busca de de una presa...\n\n");
            if(chance >= 0 && chance <= 30){
                printf("Gran caza. Tan solo un pequenio conejo... tu hambre disminuye en 30 unidades\n\n");
                hambre -= 30;
            }
            if(chance > 30 && chance <= 60){
                printf("Gran caza. Pescate un pequenio pez en un arroyo, lastima que no lo puedes cocinar... tu hambre disminuye en 10 unidades\n\n");
                hambre -= 10;
            }
            if(chance > 60 && chance <= 100){
                printf("Sufres un ataque de un animal desconocido. Tu salud se reduce en 10 unidades...\n\n");
                vida -= 10;
            }
            hambre = comprobarEstadistica(hambre, MAX_HAMBRE);
            system("pause");
            system("cls");
            break;
        case 52:                                        //52 = '4'
            printf("\nTe adentras en el bosque en busca de de una presa...\n\n");
            if(chance >= 0 && chance <= 25){
                printf("Tienes suerte... un kit de primeros auxilios. Pronto se acabara... tu vida aumeta en 15 unidades\n\n");
                vida += 15;
            }
            if(chance > 25 && chance <= 50){
                printf("Tienes suerte... una lata de comida. Pronto se acabara... tu hambre disminuye en 10 unidades\n\n");
                hambre -= 10;
            }
            if(chance > 50 && chance <= 75){
                printf("Un enjambre de avispas han acabado con tu suerte... tu vida disminuye en 10 unidades\n\n");
                vida -= 10;
            }
            if(chance > 75 && chance <= 100){
                printf("Una foza profunda ha acabado con tu suerte... tu vida disminuye en 15 unidades\n\n");
                vida -= 15;
            }
            hambre = comprobarEstadistica(hambre, MAX_HAMBRE);
            system("pause");
            system("cls");
            break;
        default:
            system("cls");
            break;
        }
        
        //Verificar si mueres
        if(vida == 0){
            printf("---ESTAS MUERTO, DEBIL---\n\n");
            printf("Solo %d dias vivo... una decepcion...\n\n", numDias);
            system("pause");
            system("cls");
            exit(EXIT_SUCCESS);
        }

        //Imprimir las estadisticas si pasaste el día
        if(selector >= 49 && selector <= 52){
            printf("Dia %d superado\n\n", numDias++);
            estadisticasFinales(vida, sed, hambre);
        }

    }while(vida > 0 && numDias != MAX_DIAS); 

}

//Comprobación de opciones del menu de acciones
char validacionDeOpcion(int numDias){

    char selectorMenu;

    do{
        printf("Estas en el dia: %d\n\n", numDias);
        printf("1. Descansar\n2. Buscar Agua\n3. Cazar\n4. Buscar Objetos\n\n");
        printf("Ingrese una opcion: ");
        scanf(" %c", &selectorMenu);
        if(isdigit(selectorMenu) != 1 || selectorMenu > 52){
            printf("Error\n");
        }
        system("pause");
        system("cls");
        fflush(stdin);
            
    }while(isdigit(selectorMenu) != 1 || selectorMenu > 52);

    return selectorMenu;
}

//Despliegue de estadisticas diarias
void estadisticasFinales(int vida, int sed, int hambre){

    printf("+------+------+--------+\n");
    printf("| Vida |  Sed | Hambre |\n");
    printf("|------+------+--------|\n");
    printf("| %4d | %4d | %6d |\n", vida, sed, hambre);
    printf("+------+------+--------+\n\n");
    system("pause");
    system("cls");
}

//Comprobar limites de la vida
int comprobarEstadistica(int estadistica, int constante){

    if(estadistica > constante)
        estadistica -= (estadistica - constante); 
    if(estadistica < 0)
        estadistica = 0;
    
    return estadistica;
}


