/*
5 - Fa�a um algoritmo que leia dois n�meros nas vari�veis Val1 e Val2, calcule sua
m�dia na vari�vel Media e imprima seu valor 
*/
#include<stdio.h>

int main()
{
	int Val1, Val2;
	float Media;
	
	printf("Digite um valor inteiro!");
	scanf("%d", &Val1);
	
	printf("Digite outro valor inteiro!");
	scanf("%d", &Val2);
	
	Media = (Val1 + Val2)/2;
	
	printf("Valor 1: '%d'\n", Val1);
	printf("Valor 2: '%d'\n", Val2);
	printf("Media: '%.2f'\n", Media);
	
	
	
}
