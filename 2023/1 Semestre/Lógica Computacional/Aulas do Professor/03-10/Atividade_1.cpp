#include<stdio.h>
#include<stdlib.h>

int main()
{
	int comprimento;
	int largura;
	int altura;
	int volume;
	
	printf("Digite o comprimento em Cm: ");
	scanf("%d", &comprimento);
	
	printf("Digite a altura em Cm: ");
	scanf("%d", &altura);
	
	printf("Digite a largura em Cm: ");
	scanf("%d", &largura);
	
	volume = largura * comprimento * altura;
	
	system("CLS");
	
	printf("----- Super Volume Calculator -----\n");
	printf("| Altura --------------------> %d |\n", altura);
	printf("| Largura -------------------> %d |\n", largura);
	printf("| Comprimento ---------------> %d |\n", comprimento);
	printf("| Volume ----------------> %d |\n", volume);
	printf("|---------------------------------|");
	
}
