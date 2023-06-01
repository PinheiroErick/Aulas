#include <iostream>
#include<stdio.h>

using std::cout;
using std::string;

int main()
{
	char nome[100];
	printf("Digite o nome: ");
	gets(nome);
	
	printf("NOME: %s",nome);
}
