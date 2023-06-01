#include<stdio.h>
#include<stdlib.h>

int main()
{
	int idade = 0;
	char nome[20];
	int aprovado = 0;
	int ac;
	
	while(aprovado == 0)
	{
		printf("Digite o nome do cliente: ");
		scanf("%s", &nome);
		system("CLS");
		printf("Digite a idade do cliente %s: ",nome);
		scanf("%d", &idade);
		system("CLS");
		if(idade < 18)
		{
			system("CLS");
			printf("Cliente %s esta acompanhado por outro de maior idade?\n",nome);
			printf("0 - NAO\n");
			printf("1 - SIM\n");
			printf("Digite uma as opcoes acima:\n");
			scanf("%d", &ac);
			system("CLS");
			if(ac == 0)
			{
				aprovado = 0;
				printf("Entrada nao autorizada!\n");
			}
			else
			{
				aprovado = 1;
				printf("Entrada autorizada!\n");
			}
						
		}
		else
		{
			aprovado = 1;
			printf("Entrada autorizada!\n");
		}
	}
	
}
