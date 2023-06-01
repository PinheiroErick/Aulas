/*
6 - Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e
imprima a velocidade em m/s (metros por segundo). 
*/
#include<stdio.h>

int main()
{
	float km,ms;
	
	printf("Digite os KM!");
	scanf("%f", &km);
	
	ms = km / 3.6;
	
	printf("KM: %.3f\n", km);
	printf("MS: %.3f\n", ms);
}
