#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[50];
	int qtd = 0;
	int total;
	float media;
	int menu;
	int repete = 1;
	int listar = 0;
	
	while(repete == 1)
	{
		printf("MENU\n\n");
		printf("1 - NOVO\n");
		printf("2 - MEDIA\n");
		printf("3 - LISTAR\n");
		printf("0 - SAIR\n");
		printf("Selecione a opcao e tecle enter\n");
		scanf("%d", &menu);
		
		if(menu == 0)
		{
			repete = 0;
		}
		else if(menu == 1)
		{
			system("CLS");
			printf("Digite um novo numero:\n");
			scanf("%d", &num[qtd]);
			
			total = total + num[qtd];
			
			qtd = qtd + 1;
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			media = total / qtd;
			
			printf("Media: %.3f\n", media);
			
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 3)
		{
			system("CLS");
			listar = 0;
			while(listar < qtd)
			{
				printf("QTD[%d] -> NUM[%d]\n",listar, num[listar]);
				
				listar = listar + 1;
			}
			printf("\n\nPosicao 2: %d\n\n", num[2]);
			system("PAUSE");
			system("CLS");
		}
	}
	
}
