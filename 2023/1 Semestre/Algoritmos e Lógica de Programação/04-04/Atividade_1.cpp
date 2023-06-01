#include<stdio.h>
#include<stdlib.h>

int main()
{
	char v_nome[10][50];
	float v_consumo[10];
	int v_qtd = 0;
	int v_listar = 0;
	int v_novo = 1;
	int menu;
	
	while(v_novo == 1)
	{
		printf("Super veiculos TOPS\n\n");
		printf("1 - Cadastrar\n");
		printf("2 - Listar\n");
		printf("0 - Sair\n");
		printf("Digite uma das opcoes acima e tecle enter\n");
		scanf("%d", &menu);
		
		if(menu == 0)
		{
			v_novo = 0;
		}
		else if(menu == 1)
		{
			system("CLS");
			
			printf("Nome do veiculo: \n");
			scanf("%s", &v_nome[v_qtd]);

			printf("Consumo do veiculo: \n");
			scanf("%f", &v_consumo[v_qtd]);
			
			v_qtd = v_qtd + 1;
			
			system("CLS");
		}
		else if(menu == 2)
		{
			system("CLS");
			
			v_listar = 0;
			while(v_listar < v_qtd)
			{
				
				printf("%s -> %.3f \n", v_nome[v_listar], v_consumo[v_listar]);
				
				v_listar = v_listar + 1;
			}
			system("PAUSE");
			system("CLS");
		}
	}
}
