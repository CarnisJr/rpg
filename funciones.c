#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

//Despliegue del menú de acciones
void interfaz(char selector, int vida, int sed, int hambre, int numDias){
    
    //Declarar funciones
    char validacionDeOpcion();
    void estadisticasFinales(int vida, int sed, int hambre, int numDias);

    do{
        selector = validacionDeOpcion();

        switch (selector)
        {
        case 49:                                        //49 = '1'
            printf("Descansaste\n");
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
            printf("Opcion no valida\n");
            system("pause");
            system("cls");
            break;
        }
        
        if(selector >= 49 && selector <= 52)
            estadisticasFinales(vida, sed, hambre, numDias++);

    }while(vida > 0); 

}

//Comprobación de opciones del menu de acciones
char validacionDeOpcion(){

    char selectorMenu;

    do{
        printf("Bienvenido a \"____\"\n\n");
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
void estadisticasFinales(int vida, int sed, int hambre, int numDias){

    printf("Dia %d superado\n\n", numDias);
    printf("+------+------+--------+\n");
    printf("| Vida |  Sed | Hambre |\n");
    printf("|------+------+--------|\n");
    printf("| %4d | %4d | %6d |\n", vida, sed, hambre);
    printf("+------+------+--------+\n\n");
    system("pause");
    system("cls");
}