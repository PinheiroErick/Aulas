#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stdlib.h>

int main()
{
	char email_bd[50] = "erick@erick.com.br";
	char senha_bd[50] = "123456789";
	char email[50];
	char senha[50];
	
	printf("Login do sistema\n\n");
	printf("Digite o E-mail: \n");
	gets(email);
	system("CLS");
	printf("Login do sistema\n\n");
	printf("Digite a senha: \n");
	gets(senha);
	system("CLS");
	
	if((strcmp(email_bd,email)) && (strcmp(senha_bd,senha)))
	{
		printf("Contectado com Sucesso!");	
	}
	else
	{
		printf("E-mail ou senha invalidos!");
			
	}
}
