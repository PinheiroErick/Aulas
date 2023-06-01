#include<stdio.h>

int main()
{
	int NumA;
	int NumB;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &NumA);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &NumB);
			
	if(NumA > NumB)
	{
		printf("O numero '%d' e maior!", NumA);
	}
	else if(NumA < NumB)
	{
		printf("O numero '%d' e maior!", NumB);
	}
	else
	{
		printf("Os dois numeros sao iguais -> '%d'", NumA);
	}
		
}
