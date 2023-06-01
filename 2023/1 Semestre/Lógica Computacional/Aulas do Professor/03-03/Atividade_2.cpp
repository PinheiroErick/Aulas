#include<stdio.h>

int main()
{
	int valor_1;
	int valor_2;
	int valor_t;
	
	printf("Digite o valor 1: ");
	scanf("%d", &valor_1);
	
	printf("Digite o valor 2: ");
	scanf("%d", &valor_2);
	
	if((valor_1 > 0) && (valor_2 > 0))
	{
		if((valor_1 > 10) || (valor_2 > 10))
		{
			printf("Possui valor acima de 10!\n");
		}
		
		valor_t = valor_1 * valor_2;
		
		printf("Valor total: %d. \n", valor_t);
		
		if(valor_t > 100)
		{
			printf("Valor total maior que 100.");
		}
		else
		{
			printf("Valor total menor que 100.");
		}
	}
}
