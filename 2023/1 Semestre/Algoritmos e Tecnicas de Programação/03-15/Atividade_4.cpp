/*
4 - Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem indicando se este n�mero � positivo ou negativo.  
*/
#include<stdio.h>

int main()
{
	int Val1;
	
	printf("Digite um valor inteiro!");
	scanf("%d", &Val1);
	
	if(Val1 > 0)
	{
		printf("Valor '%d' e POSITIVO", Val1);
	}
	else if(Val1 < 0)
	{
		printf("Valor de '%d' e  NEGATIVO", Val1);
	}
	else
	{
		printf("ZERO e NEUTROOOOOOOOOOO \n");
	}
	
	
}
