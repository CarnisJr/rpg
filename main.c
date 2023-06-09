#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "funciones.h"


int main(void){

    //Definir variables
    int sed = 10, hambre = 20, numDias = 1, vida = 80;
    char selector;

    interfaz(selector, vida, sed, hambre, numDias);

    return 0;
}