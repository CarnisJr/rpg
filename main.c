#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include "funciones.h"


int main(void){

    //Definir variables
    int sed = 0, hambre = 0, numDias = 1, vida = 100;
    char selector;
    srand(time(NULL));

    interfaz(selector, vida, sed, hambre, numDias);

    return 0;
}