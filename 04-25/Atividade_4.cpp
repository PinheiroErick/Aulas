#include<stdio.h>

int ano,nasc,idade; // Variavel global -> pode ser lida em todas as funções

int p_idade()
{
	idade = ano - nasc;
	printf("Idade: %d", idade);
}
int t_ano()
{
	int valor; // Variavel local -> só exsite nessa função
	printf("Digite o ano: ");
	scanf("%d", &valor);
	return valor;
}
int main()
{
	printf("Ano atual\n");
	ano = t_ano();
	printf("Ano de nascimento\n");
	nasc = t_ano();
	p_idade();
}

