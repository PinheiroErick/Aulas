#include<stdio.h>

int main()
{
	float area;
	float larg;
	float comp;
	
	printf("Digite a largura do terreno: ");
	scanf("%f", &larg);
	
	printf("Digite o comprimento do terreno: ");
	scanf("%f", &comp);
	
	area = larg * comp;
	
	printf("Area: %.3f \n", area);
	
	if(area <= 75)
	{
		printf("Cubiculo");
	}
	else if((area > 75) && (area <= 175))
	{
		printf("Meio terreno");
	}
	else if((area > 175) && (area <= 500))
	{
		printf("Terreno inteiro");
	}
	else if((area > 500) && (area <= 3000))
	{
		printf("Chacara");
	}
	else if(area > 3000) 
	{
		printf("Fazenda");
	}
	else
	{
		printf("Invalido, tente novamente!");
	}
	
	printf("\n");
	printf("          --------- %.3f --------\n", larg);
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |         %.3f        | %.3f \n", area, comp);
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          |                        |\n");
	printf("          --------- %.3f --------\n", larg);
	
}
