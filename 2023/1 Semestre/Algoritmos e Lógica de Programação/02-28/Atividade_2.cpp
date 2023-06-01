#include<stdio.h>

int main()
{
	char veiculo[15];
	float litro;
	float km;
	float consumo;
	
	printf("Digite o nome do seu veiculo: ");
	scanf("%s", &veiculo);
	
	printf("Digite quantos litros usou: ");
	scanf("%f", &litro);
	
	printf("Digite a distancia percorrida: ");
	scanf("%f", &km);
	
	consumo = km / litro; 
	
	printf("|--- Veiculo ---|\n");
	printf("|     %s     |\n", veiculo);
	printf("|--- Consumo ---|\n");
	printf("|     %.0f km/l    |\n", consumo);
	printf("|---------------|");
}
