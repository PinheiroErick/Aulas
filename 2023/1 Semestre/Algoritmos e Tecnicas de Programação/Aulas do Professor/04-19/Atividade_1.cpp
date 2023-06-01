#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num[10];
	int qtd = 0, listar = 0;
	float total;
	float media;
	int menu, repete = 1;
	
	while(repete == 1)
	{
		printf("MENU\n\n");
		printf("1 - NOVO\n");
		printf("2 - MEDIA\n");
		printf("3 - LISTAR\n");
		printf("0 - SAIR\n");
		scanf("%d", &menu);
		
		if(menu == 0)
		{
			repete = 0;
		}
		else if(menu == 1)
		{
			system("CLS");
			printf("Digite um numero: ");
			scanf("%d", &num[qtd]);
			
			total = total + num[qtd];
			qtd = qtd + 1;
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			media = total / qtd;
			printf("Media: %.3f\n\n\n", media);
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 3)
		{
			system("CLS");
			while(listar < qtd)
			{
				printf("NUM[%d] -> %d\n", listar, num[listar]);
				listar++;
			}
			system("PAUSE");
			system("CLS");
		}
	}
}
