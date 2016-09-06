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
    int euros[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

    do {
        printf("Ingrese una cantidad: \n");
        fflush(stdin);
        scanf("%s", stringNum);
        num = atof(stringNum);
        printf("Billete a empezar: \n");
        scanf("%d", &billete);

        if (billete == 500 || billete == 200 || billete == 100 || billete == 50) {
            billeteV = 1;
        } else {
            printf("Billete no válido.\n");
            billeteV = 0;
        }
        
    }    while ((num < 1) || (billeteV != 1) || (validarEntrada(stringNum) != 0) || (num < billete));
    if (num != 0) {
        cEntera = (int) num;
        cDecimal = round((num - cEntera)*100);
        printf("El número introducido es %i,%i y el billete es %i:\n", cEntera, cDecimal, billete);

        //Calculo billete______________________________________________
        int i, posicionBillete, cantidadEntera;
        for (i = 0; i < 4; i++) {
            if (euros[i] == billete)
                posicionBillete = i;
        }
        for (i = posicionBillete; i < 9; i++) {
            cantidadEntera = cEntera / euros[i];
            cEntera = cEntera - (cantidadEntera * euros[i]);
            if (cantidadEntera > 0) {
                if (i < 7) {
                    if (cantidadEntera == 1) {
                        printf("%d billete de %d €\n", cantidadEntera, euros[i]);
                    } else {
                        printf("%d billetes de %d €\n", cantidadEntera, euros[i]);
                    }
                } else {
                    if (cantidadEntera == 1) {
                        printf("%d moneda de %d €\n", cantidadEntera, euros[i]);
                    } else {
                        printf("%d monedas de %d €\n", cantidadEntera, euros[i]);
                    }
                }
            }
        }

        //Calculo monedas______________________________________________
        int j, cantidadDecimal;
        for (j = 3; j < 9; j++) {
            cantidadDecimal = cDecimal / euros[j];
            cDecimal = cDecimal - (cantidadDecimal * euros[j]);
            if (cantidadDecimal > 0) {
                if (cantidadDecimal == 1) {
                    printf("%d moneda de %d céntimos\n", cantidadDecimal, euros[j]);
                } else {
                    printf("%d monedas de %d céntimos\n", cantidadDecimal, euros[j]);
                }
            }
        }
    }
    return 0;
}

int validarEntrada(char nom[]) {
    int i = 0;
    int valido = 0;
    int numCarac = strlen(nom);

    for (i = 0; i < numCarac; i++) {
        if (!isdigit(nom[i]) && (nom[i])!=46) {
            valido = 1;
            break;
        }
    }
    return valido;
}