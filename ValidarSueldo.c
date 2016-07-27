#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
 * Validar el sueldo introducido y elegir 
 * el tipo de billete máximo a utilizar (500,200,100 ó 50).
 */

int main() {

    int num;
    int billete;
    int billeteV;

    char stringNum[5];
    do{
        printf("Ingrese una cantidad\n");
        scanf("%s",stringNum);
        num=atoi(stringNum);
        printf("Billete a empezar \n");
        scanf("%d", &billete);
        
            if (billete == 500) {
                billete = 500;
                billeteV = 1;
            } else if (billete == 200) {
                billete = 200;
                billeteV = 1;
            } else if (billete == 100) {
                billete = 100;
                billeteV = 1;
            } else if (billete == 50) {
                billete = 50;
                billeteV = 1;
            } else {
                printf("Billete no válido.\n");
                billeteV = 0;
            }
    }
    while ((num<1) || (billeteV != 1)||(validarEntrada(stringNum)!=0));
        if(num!=0){
            printf("El numero es: %d\n",num);
        }
    return num;
}


int validarEntrada(char nom[]) 
{ 
    int i = 0; 
    int valido = 0;
    int numCarac = strlen(nom); 

    for( i = 0; i < numCarac; i++) 
    { 
        if(!isdigit(nom[i])) 
        {  
            valido = 1;
            break;
        }
    }
    return valido; 
}
