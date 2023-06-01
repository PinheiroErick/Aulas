#include<stdio.h>

int main();
{
	int n1;
	int n2;
	int t;
	
	printf("Digite o primeiro numero inteiro: ");
	scanf("%d", &n1);
	
	printf("Digite o segundo numero inteiro: ");
	scanf("%d", &n2);
	
	if((n1 > 0) && (n2 > 0))
	{
		t = n1 * n2;
		printf("Valor: %d \n", t);
		
		if(t > 100)
		{
			printf("O Resultado e maior que 100!");
		}
		if((n1 > 10) || (n2 > 10))
		{
			printf("Algum dos numeros e maior que 10!");
		}		
	}
}
