#include<stdio.h>

int valor()
{
	int valor;
	printf("Digite um valor inteiro: ");
	scanf("%d", &valor);
	
	return valor;
}

int soma(int n1,int n2)
{
	int resultado = n1 + n2;
	
	printf("\n\nSOMA: %d", resultado);
}

int main()
{
	int n1,n2,n3;
	float m;
	
	n1 = valor();
	n2 = valor();
	n3 = valor();
	
	m = (n1+n2+n3)/3;
	
	printf("\n\nMedia: %.2f",m);
	
	n1 = valor();
	n2 = valor();
	
	soma(n1,n2);
	
}
