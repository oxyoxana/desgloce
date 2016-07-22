#include <stdio.h>
#include <stdlib.h>

int main() {

    float cF;
    int resto, resto500, resto200, cE;
    //importe2=(int)importe;
    
    printf("Ingrese una cantidad\n");
    scanf("%f", &cF);
    printf("Ha introducido %0.2f\n", cE);
 
    
    
    //cP=cE;
    cP=1700;
    
    
    printf("> %i \n", cE);
    resto500=(cE / 500);
    if (resto500 != 0){
        printf("500> %i \n", resto500);
    }
    resto=(cE % 500);
    
    if (resto != 0){
        printf("200> %i \n", resto);
    }
    resto=(cE % 200);
    
    if (resto != 0){
        printf("100> %i \n", resto);
    }
    resto=(cF % 100);
    printf("resto> %i \n", resto);
    
    
    return 0;
}

