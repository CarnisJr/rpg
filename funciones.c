#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

void interfaz(char selector, int vida){
    
    //Declarar la función de comprobación
    char validacionDeOpcion();

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

    }while(vida > 0); 

}

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
