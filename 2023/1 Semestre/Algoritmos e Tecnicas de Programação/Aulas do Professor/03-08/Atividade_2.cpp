#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[20];
	float venda;
	float comissao;
	
	printf("Digite o nome: ");
	scanf("%s", &nome);
	system("CLS");
	
	printf("Digite o a venda do %s: ", nome);
	scanf("%f", &venda);
	system("CLS");
	
	if(venda > 50.000)
	{
		comissao = venda * 0.12;
	}
	else if((venda >= 30.000) && (venda <= 50.000))
	{
		comissao = venda * 0.095;
	}
	else
	{
		comissao = venda * 0.07;
	}
	
	printf("Corretor nome: %s\n", nome);
	printf("Venda: %f\n", venda);
	printf("Comissao: %f", comissao);
			
}

