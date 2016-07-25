#include <stdio.h>
#include <stdlib.h>

int main() {

    float cF;
    int resto, resto500, resto200, resto100, resto50, resto20, resto10, resto5, resto2, resto1,cE, cP;
    //importe2=(int)importe;
    /*
    printf("Ingrese una cantidad\n");
    scanf("%f", &cF);
    printf("Ha introducido %0.2f\n", cE);*/
 
    
    
    //cP=cE;
    cP=1470;
    
    printf("> %i \n", cP);
    resto=(cP / 500);
    if (resto != 0){
        printf("500> %i \n", resto);
    }
    resto=(cP % 500);
                                                    printf("resto: %i \n", resto);
    
    resto200=(resto / 200);
    if (resto200 != 0){
        printf("200> %i \n", resto200);
    }
    resto=(resto % 200);
                                                    printf("resto: %i \n", resto);
    resto100=(resto / 100);
    if (resto100 != 0){
        printf("100> %i \n", resto100);
    }
    resto=(resto % 100);
                                                    printf("resto: %i \n", resto);
    
    resto50=(resto / 50);
    if (resto50 != 0){
        printf("50> %i \n", resto50);
    }
    resto=(resto % 50);
                                                    printf("resto> %i \n", resto);

    resto20=(resto / 20);
    if (resto20 != 0){
        printf("20> %i \n", resto20);
    }
    resto=(resto % 20);
                                                    printf("resto> %i \n", resto);
    resto10=(resto / 10);
    if (resto10 != 0){
        printf("10> %i \n", resto);
    }
    resto=(resto % 10);
                                                    printf("resto> %i \n", resto);
    
    resto5=(resto / 5);
    if (resto5 != 0){
        printf("5> %i \n", resto);
    }
    resto=(resto % 5);
                                                    printf("resto> %i \n", resto);
    resto2=(resto / 2);
    if (resto2 != 0){
        printf("2> %i \n", resto);
    }
    resto=(resto % 2);
                                                    printf("resto> %i \n", resto);
    
    resto1=(resto / 1);
    if (resto1 != 0){
        printf("1> %i \n", resto);
    }
    resto=(resto % 1);
                                                    printf("resto> %i \n", resto);
    
    /* DECIMALES
    if (resto != 0){
        printf("0.50> %i \n", resto);
    }
    resto=(cF % 0.50);
    printf("resto> %i \n", resto);
    
    if (resto != 0){
        printf("0.20> %i \n", resto);
    }
    resto=(cF % 0.20);
    printf("resto> %i \n", resto);
    
    if (resto != 0){
        printf("0.10> %i \n", resto);
    }
    resto=(cF % 0.10);
    printf("resto> %i \n", resto);
    
    if (resto != 0){
        printf("0.05> %i \n", resto);
    }
    resto=(cF % 0.05);
    printf("resto> %i \n", resto);
    
    if (resto != 0){
        printf("0.02> %i \n", resto);
    }
    resto=(cF % 0.02);
    printf("resto> %i \n", resto);
    
    if (resto != 0){
        printf("0.01> %i \n", resto);
    }
    resto=(cF % 0.01);
    printf("resto> %i \n", resto);
     */
    
    return 0;
    
    
/*
$c=1895.09;
$cp=$c;

$b500=(int)($cp/500);
$cp=$cp-$b500*500;
$b200=(int)($cp/200);
$cp=$cp-$b200*200;
$b100=(int)($cp/100);
$cp=$cp-$b100*100;
$b50=(int)($cp/50);
$cp=$cp-$b50*50;
$b20=(int)($cp/20);
$cp=$cp-$b20*20;
$b10=(int)($cp/10);
$cp=$cp-$b10*10;
$b5=(int)($cp/5);
$cp=$cp-$b5*5;
$m2=(int)($cp/2);
$cp=$cp-$m2*2;
$m1=(int)($cp/1);
$cp=$cp-$m1*1;
$m050=(int)($cp/0.50);
$cp=$cp-$m050*0.50;
$m020=(int)($cp/0.20);
$cp=$cp-$m020*0.20;
$m010=(int)($cp/0.10);
$cp=$cp-$m010*0.10;
$m005=(int)($cp/0.05);
$cp=$cp-$m005*0.05;
$m002=(int)($cp/0.02);
$cp=$cp-$m002*0.02;
$m001=(int)($cp/0.01);
$cp=$cp-$m001*0.01;
echo "La cantidad $c necesita $b500 de 500, $b200 de 200, $b100 de 100, $b50 de 50, $b20 de 20, $b10 de 10, $b5 de 5, y monedas $m2 de 2, $m1 de 1, $m050 de 0.50, $m020 de 0.20, $m010 de 0.10, $m005 de 0.05, $m002 de 0.02 y $m001 de 0.01.";

*/
}

