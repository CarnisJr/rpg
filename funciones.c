#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

//Definir constantes
#define MAX_DIAS 10
#define MAX_SED 100
#define MAX_HAMBRE 100
#define MAX_SALUD 100

//Despliegue del menú de acciones
void interfaz(char selector, int vida, int sed, int hambre, int numDias){
    
    //Declarar funciones
    char validacionDeOpcion(int numDias);
    void estadisticasFinales(int vida, int sed, int hambre);
    int comprobarLimitesEstadisticas(int vida);


    do{

        selector = validacionDeOpcion(numDias);
        
        if(vida >= 100){
            printf("Tu salud esta al maximo, no puedes descansar\n\n");
            system("pause");
            system("cls");
            selector = 53;
        }

        printf("Sus estadisticas actuales son\n\n");
        estadisticasFinales(vida, sed, hambre);

        switch (selector)
        {
        case 49:                                        //49 = '1'
            printf("Decidiste descansar. Tu salud aumenta en 10 puntos de salud\n\n");
            vida += 10;
            vida = comprobarLimitesEstadisticas(vida);
            system("pause");
            system("cls");
            break;
        case 50:                                        //48 = '2'
            printf("Buscas agua\n");
            system("pause");
            system("cls");
            break;
        case 51:                                        //51 = '3'
            printf("estas cazando\n");
            system("pause");
            system("cls");
            break;
        case 52:                                        //52 = '4'
            printf("Buscas objetos\n");
            system("pause");
            system("cls");
            break;
        default:
            break;
        }
        
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
        fflush(stdin);
        scanf("%c", &selectorMenu);
        if(isdigit(selectorMenu) != 1)
            printf("No se admiten letras\n");
            system("pause");
            system("cls");
            
    }while(isdigit(selectorMenu) != 1);

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
int comprobarVida(int vida){

    if(vida > MAX_SALUD)
        vida -= (vida - MAX_SALUD); 
    
    return vida;
}