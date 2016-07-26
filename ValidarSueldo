#include <stdio.h>
#include <stdlib.h>

/*
 * Validar el sueldo introducido y elegir 
 * el tipo de billete máximo a utilizar (500,200,100 ó 50).
 */

int main() {

    float cTotal; //La variable tiene que estar en tipo float para poder aceptar decimales.
    int cEntera; //Variable donde se va a guardar la parte decimal de "cTotal".
    int cDecimal; //Variable donde se va a guardar la parte decimal de "cTotal".
    int billete; //Variable que almacena el billete introducido.

    printf("Ingrese una cantidad\n");
    scanf("%f", &cTotal);
    printf("Ha introducido %0.2f\n", cTotal);

    cEntera = cTotal;
    cDecimal = (cTotal - cEntera)*100;

    printf("Billete a empezar \n");
    scanf("%d", &billete);

    if (billete == 500) {
        billete = 500;
    } else if (billete == 200) {
        billete = 200;
    } else if (billete == 100) {
        billete = 100;
    } else if (billete == 50) {
        billete = 50;
    } else {
        printf("Billete no válido.\n");
    }

    
    
    

    return 0;
}

