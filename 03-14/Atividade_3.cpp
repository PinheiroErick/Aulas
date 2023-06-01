/*
3 - Faça um algoritmo que leia dois números e indique se são iguais ou se são diferentes.  
*/
#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Digite um valor inteiro para A!");
	scanf("%d", &a);
	
	printf("Digite outro valor inteiro para B!");
	scanf("%d", &b);
	
	if(a == b)
	{
		printf("Valor de A '%d' e igual Valor de B '%d'", a,b);
	}
	else
	{
		printf("Valor de A '%d' e  diferente de B '%d'", a,b);
	}
	
	
}
