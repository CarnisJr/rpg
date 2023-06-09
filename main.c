#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
#include "funciones.h"

//Definir constantes
#define MAX_DIAS 10
#define MAX_SED 100
#define MAX_HAMBRE 100
#define MAX_SALUD 100

int main(void){

    //Definir variables
    int sed, hambre, vida = 100;
    char selector;

    interfaz(selector, vida);

    return 0;
}