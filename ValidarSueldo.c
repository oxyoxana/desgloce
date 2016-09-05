#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/*
 * Validar el sueldo introducido y elegir 
 * el tipo de billete máximo a utilizar (500,200,100 ó 50).
 */

int main() {

    int cEntera, cDecimal, billete, billeteV;
    char stringNum[5];
    float num;
    int x[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int z[] = {50, 20, 10, 5, 2, 1};
    
    do{
        printf("Ingrese una cantidad: \n");
        scanf("%s",stringNum);
        num=atof(stringNum);
        printf("Billete a empezar: \n");
        scanf("%d", &billete);
            
            if (billete == 500) {
                billeteV = 1;
            } else if (billete == 200) {
                billeteV = 1;
            } else if (billete == 100) {
                billeteV = 1;
            } else if (billete == 50) {
                billeteV = 1;
            } else {
                printf("Billete no válido.\n");
                billeteV = 0;
            }
    }
    while ((num<1) || (billeteV != 1) || (validarEntrada(stringNum)!=0) || (num < billete));
        if(num!=0){
            cEntera= (int)num;
            //printf("entera %i\n", cEntera);
            cDecimal=ceil((num-cEntera)*100);
            //printf("decimal %i\n", cDecimal);
            //resto=(cEntera / billete);
            //printf("resto %d \n", resto);
            
            printf("El número introducido es %i,%i y el billete es %i:\n", cEntera, cDecimal, billete);
            
            //Calculo billete______________________________________________
            int i, posicionBillete, cantidadEntera;
            for (i = 0; i < 4; i++) {
                if (x[i]==billete)
                    posicionBillete=i;
            }

            for (i=posicionBillete; i<9; i++){
                cantidadEntera=cEntera / x[i];
                cEntera = cEntera - (cantidadEntera * x[i]);
                if (cantidadEntera > 0){
                    //printf("uno");
                    if (i<7){
                        printf("%d billetes de %d €\n", cantidadEntera, x[i]);
                    } else {
                        printf("%d monedas de %d €\n", cantidadEntera, x[i]);
                    }
                }
            }
            
            //Calculo monedas______________________________________________
            int j, posicionMonedas, cantidadDecimal;
            for (j = 0; j < 6; j++) {
                if (z[j]==cDecimal){
                    posicionMonedas=j;
                }
            }
            for (j=posicionMonedas; j<6; j++){
            cantidadDecimal=cDecimal / z[j];
            cDecimal = cDecimal - (cantidadDecimal * z[j]);
                if (cantidadDecimal > 0){
                    printf("%d monedas de %d céntimos\n", cantidadDecimal, z[j]);
                }
            }
        }
    return 0;
}


int validarEntrada(char nom[]) 
{ 
    int i = 0; 
    int valido = 0;
    int numCarac = strlen(nom); 

    for( i = 0; i < numCarac; i++) 
    { 
        if(isalpha(nom[i])) 
        {  
            valido = 1;
            break;
        }else if(isdigit(nom[i])) 
        {  
            valido = 0;
            break;
        }
    }
    return valido; 
}