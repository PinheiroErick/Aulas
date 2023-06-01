#include<stdio.h>
#include<stdlib.h>

int main()
{

	float valor[10];
	int qtd = 0, listar = 0;
	float total;
	float pago;
	float troco;
	int menu, repete = 1;
	
	while(repete == 1)
	{
		printf("MENU\n\n");
		printf("1 - NOVO\n");
		printf("2 - FECHAR VENDA\n");
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
			printf("Digite um valor: ");
			scanf("%f", &valor[qtd]);
			
			total = total + valor[qtd];
			qtd++;
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			printf("Digite o valor pago: ");
			scanf("%f", &pago);
			
			if(pago >= total)
			{
				troco = total - pago;
				
				printf("TOTAL: %.2f\n", total);
				printf("PAGO : %.2f\n", pago);
				printf("TROCO: %.2f\n\n\n", troco);
			}
			else
			{
				system("CLS");
				printf("Pagamento Insuficiente. TENTE NOVAMENTE!\n\n\n");
			}
			system("PAUSE");
			system("CLS");
		}
		else if(menu == 3)
		{
			system("CLS");
			while(listar < qtd)
			{
				printf("VALOR[%d] -> %.2f\n", listar, valor[listar]);
				listar++;
			}
			system("PAUSE");
			system("CLS");
		}
	}
}
