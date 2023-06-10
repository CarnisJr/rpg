#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include "funciones.h"


int main(void){

    //Definir variables
    int sed = 100, hambre = 20, numDias = 1, vida = 5;
    char selector;
    srand(time(NULL));

    interfaz(selector, vida, sed, hambre, numDias);

    return 0;
}