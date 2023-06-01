/*
1 - Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido. 
*/
#include<stdio.h>

int main()
{
	int valor, quad, cubo;
	
	printf("Digite um valor inteiro!");
	scanf("%d", &valor);
	
	quad = valor * valor;
	cubo = valor * valor * valor;
	
	printf("Valor: %d\n", valor);
	printf("Quadrado: %d\n", quad);
	printf("Cubo: %d\n", cubo);
}
