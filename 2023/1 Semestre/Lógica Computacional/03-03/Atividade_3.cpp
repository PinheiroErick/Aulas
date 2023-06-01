#include<stdio.h>

int main()
{
	float area;
	float comp;
	float larg;
	
	printf("Digite o comprimento: ");
	scanf("%f", &comp);
	
	printf("Digite a largura: ");
	scanf("%f", &larg);
	
	area = comp * larg;
	
	if(area <= 75)
	{		
		printf("Cubiculo.");
	}
	else if((area > 75) && (area <= 175))
	{
		printf("Meio Terreno.");
	}
	else if((area > 175) && (area <= 500))
	{
		printf("Terreno Inteiro.");
	}
	else if((area > 500) && (area <= 3000))
	{
		printf("Chacara.");
	}
	else if(area > 3000)
	{
		printf("Fazenda.");
	}
	else
	{
		printf("Erro ao calcular!");
	}
	
	printf("\n\n");
	printf("                       %.3f         \n", larg);
	printf("               --------------------\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |       %.3f       | %.3f\n", area, comp);
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               |                  |\n");
	printf("               --------------------\n");
	printf("                       %.3f         \n", larg);
}
