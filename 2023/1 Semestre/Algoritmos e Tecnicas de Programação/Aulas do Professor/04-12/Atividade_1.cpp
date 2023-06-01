#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[100];
	int total;
	int qtd = 0;
	int novo = 1;
	int menu;
	int media;
	
	while(novo == 1)
	{
		printf("Selecione a opcao abaixo!\n");
		printf("1 - Novo\n");
		printf("2 - Media\n");
		printf("0 - SAIR\n\n");
		printf("Digite a opcao e tecle enter:\n");
		scanf("%d", &menu);
		
		if(menu == 0)
		{
			novo = 0;
		}
		else if(menu == 1)
		{
			system("CLS");
			
			printf("Digite um numero: \n");
			scanf("", );
			
			total = total + 
			qtd = qtd + 1;

			printf("\n\n");
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			media = total / qtd;
			printf();
			
			printf("\n\n");
			system("PAUSE");
			system("CLS");
		}
	}
}
