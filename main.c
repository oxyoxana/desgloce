#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int resto, resto200, resto100, resto50, resto20, resto10, resto5, resto2,
            resto1, resto020, resto010, resto05, resto02, resto01,
            cEntera, cDecimal, billete, b500,b200,b100;
    float cTotal;


    printf("Billete a empezar \n");
    scanf("%d", &billete);
    if (billete == 500) {
        printf("Quiere usar un billete de 500\n");
        b500=500;
    } else if (billete == 200) {
        printf("Quiere usar un billete de 200\n");
        b200=200;
      } else if (billete == 100) {
        printf("Quiere usar un billete de 100\n");
        b100=100;
    }

    printf("Ingrese una cantidad\n");
    scanf("%f", &cTotal);


    cEntera = cTotal;
    cDecimal = (cTotal - cEntera) * 100;

    if(cTotal >= b500 ){
        printf("Algo del billete");
    }
    resto = (cEntera / 500);
    if (resto != 0) {
        printf("500> %i \n", resto);
    }
    resto = (cEntera % 500);
    // printf("resto: %i \n", resto);
    
    resto200 = (resto / 200);
    if (resto200 != 0) {
        printf("200> %i \n", resto200);
    }
    resto = (resto % 200);
    //printf("resto: %i \n", resto);

    resto100 = (resto / 100);
    if (resto100 != 0) {
        printf("100> %i \n", resto100);
    }
    resto = (resto % 100);
    //printf("resto: %i \n", resto);

    resto50 = (resto / 50);
    if (resto50 != 0) {
        printf("50> %i \n", resto50);
    }
    resto = (resto % 50);
    //printf("resto> %i \n", resto);

    resto20 = (resto / 20);
    if (resto20 != 0) {
        printf("20> %i \n", resto20);
    }
    resto = (resto % 20);
    //printf("resto> %i \n", resto);

    resto10 = (resto / 10);
    if (resto10 != 0) {
        printf("10> %i \n", resto10);
    }
    resto = (resto % 10);
    //printf("resto> %i \n", resto);

    resto5 = (resto / 5);
    if (resto5 != 0) {
        printf("5> %i \n", resto5);
    }
    resto = (resto % 5);
    // printf("resto> %i \n", resto);

    resto2 = (resto / 2);
    if (resto2 != 0) {
        printf("2> %i \n", resto2);
    }
    resto = (resto % 2);
    //printf("resto> %i \n", resto);

    resto1 = (resto / 1);
    if (resto1 != 0) {
        printf("1> %i \n", resto1);
    }
    resto = (resto % 1);
    //printf("resto> %i \n", resto);


    //DECIMALES________________________________________________________________________________
    resto = (cDecimal / 50);
    if (resto != 0) {
        printf("0.50> %i \n", resto);
    }
    resto = (cDecimal % 50);
    //printf("resto> %i \n", resto);

    resto020 = (resto / 20);
    if (resto020 != 0) {
        printf("0.20> %i \n", resto020);
    }
    resto = (resto % 20);
    //printf("resto> %i \n", resto);
    resto010 = (resto / 10);
    if (resto010 != 0) {
        printf("0.10> %i \n", resto10);
    }
    resto = (resto % 10);
    //printf("resto> %i \n", resto);

    resto05 = (resto / 5);
    if (resto05 != 0) {
        printf("0.05> %i \n", resto05);
    }
    resto = (resto % 5);

    //printf("resto> %i \n", resto);
    resto02 = (resto / 2);
    if (resto02 != 0) {
        printf("0.02> %i \n", resto02);
    }
    resto = (resto % 2);
    //printf("resto> %i \n", resto);

    resto01 = (resto / 1);
    if (resto01 != 0) {
        printf("0.01> %i \n", resto01);
    }
    resto = (resto % 1);
    //printf("resto> %i \n", resto);

    return 0;
}

