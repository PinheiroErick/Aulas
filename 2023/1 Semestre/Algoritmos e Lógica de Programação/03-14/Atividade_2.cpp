/*
2 - Fa�a um algoritmo que leia dois n�meros A e B e imprima o maior deles.  
*/
#include<stdio.h>

int main()
{
	int a, b;
	
	printf("Digite um valor inteiro!");
	scanf("%d", &a);
	
	printf("Digite outro valor inteiro!");
	scanf("%d", &b);
	
	if(a > b)
	{
		printf("Valor de A '%d' e maior que Valor de B '%d'", a,b);
	}
	else if(b > a)
	{
		printf("Valor de B '%d' e maior que Valor de A '%d'", b,a);
	}
	else
	{
		printf("Valor de A '%d' e  Valor de B '%d' sao iguais", a,b);
	}
	
	
}
