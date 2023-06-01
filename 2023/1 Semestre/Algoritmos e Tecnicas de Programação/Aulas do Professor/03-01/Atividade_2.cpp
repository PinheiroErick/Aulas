#include<stdio.h>
#include<stdlib.h>

int main()
{
	float peso;
	float altura;
	float imc;
	
	printf("Digite o peso: ");
	scanf("%f", &peso);
	system("CLS");
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	system("CLS");
	
	imc = peso / (altura * altura);
	
	printf("Peso: %.3f \n", peso);
	printf("Altura: %.2f \n", altura);
	printf("IMC: %.2f \n", imc);
	
	if(imc < 18.5)
	{
		printf("Abaixo do peso normal.");
	}
	else if((imc >= 18.5) && (imc <= 24.9))
	{
		printf("Peso normal");
	}
	else if((imc >= 25) && (imc <= 29.9))
	{
		printf("Excesso de peso");
	}
	else if((imc >= 30) && (imc <= 34.9))
	{
		printf("Obesidade Classe 1");
	}
	else if((imc >= 35) && (imc <= 39.9))
	{
		printf("Obesidade Classe 2");
	}
	else if(imc >= 40)
	{
		printf("Obesidade Classe 3");
	}
	else
	{
		printf("Valor invalido");
	}
	
}


/* ANOTACOES 

int -> %d
float -> %f
char -> %c
char que possui varios caracteres %s

&& -> representa "e"
and -> representa "e"
|| -> representa "ou"
or -> representa "ou"

= -> atribuicao
== -> comparacao
>= -> maior ou igual
<= -> menor ou igual
!= -> diferente (vamos usar este)
<> -> diferente

Operadores
+ - * /

if -> se
else -> senao
else if -> senao se

na linha do (if, else e else if) não tem ;

system("CLS"); -> apaga o historico da tela
system("PAUSE"); -> pausa o codigo até pressionar uma tecla

*/
