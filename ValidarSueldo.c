#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
 * Validar el sueldo introducido y elegir 
 * el tipo de billete máximo a utilizar (500,200,100 ó 50).
 */

int main() {

    int cEntera, cDecimal, resto, restoSobrante;
    int billete, euro;
    int billeteV;
    char stringNum[5];
    float num;
    int x[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int z[] = {1, 2, 5, 10, 20, 50};
    
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
    while ((num<1) || (billeteV != 1) || (validarEntrada(stringNum)!=0));
        if(num!=0){
            //printf("El numero es: %f\n",num);
            printf("El número introducido es %f y el billete a empezar es %i\n", num, billete);
            cEntera= (int)num;
            //printf("entera %i\n", cEntera);
            cDecimal=(num-cEntera)*100;
            //printf("decimal %i\n", cDecimal);
            
            //resto=(cEntera / billete);
            //printf("resto %d \n", resto);
            
            //Calculo billete______________________________________________
            int i, j, posicionBillete, posicionMonedas, cantidadEuro, cantidadDecimal, cantidadEntera;
            for (i = 0; i < 4; i++) {
                if (x[i]==billete)
                    posicionBillete=i;
            }
            for (j = 0; j < 5; j++) {
                if (z[j]==cantidadDecimal)
                    posicionMonedas=j;
            }
/*
            for (i=posicionBillete; i<9; i++){
                cantidadEuro=num / x[i];
                num = num - (cantidadEuro * x[i]);
                if (cantidadEuro > 0)
                    printf("Unidades de %d Euros son %d, resto %f \n", x[i], cantidadEuro, num);
            }
*/ 
            for (i=posicionBillete; i<9; i++){
                cantidadEntera=cEntera / x[i];
                cEntera = cEntera - (cantidadEntera * x[i]);
                if (cantidadEntera > 0)
                    printf("Unidades de %d Euros son %d, resto %i \n", x[i], cantidadEntera);
            }
            for (j=posicionMonedas; j<5; j++){
            cantidadDecimal=cDecimal / z[j];
                cDecimal = cDecimal - (cantidadDecimal * z[j]);
                if (cantidadDecimal > 0)
                    printf("Unidades de %d Monedas son %d, resto %i\n", z[j], cantidadDecimal);
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