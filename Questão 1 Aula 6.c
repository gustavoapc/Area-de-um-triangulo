#include <stdlib.h>
#include <stdio.h>
//Fa�a um algoritmo em C que calcule 
//a �rea de um triangulo dando como 
//entrada base e altura?
int main()
{
 float base,altura,area;
 printf("digite o valor da base:\n");
 scanf("%f",&base);	
 printf("digite o valor da altura\n");
 scanf("%f",&altura);
area=(base*altura)/2;
printf("o valor da area do triangulo e de:%.2f",area);
return 0;
}