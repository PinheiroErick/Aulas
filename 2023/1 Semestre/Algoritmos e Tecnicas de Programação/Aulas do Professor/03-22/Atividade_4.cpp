/*
Faça um algoritmo que receba o valor de uma venda 
e fique pedindo o pagamento até digitar um valor
maior ou igual ao da venda e por fim mostre o troco
*/

#include<stdio.h>

int main()
{
	float venda,pago,troco;
	int status;
	
	status = 0;
	
	printf("Digite o valor da venda: ");
	scanf("%f", &venda);
	
	while(status == 0)
	{
		printf("Digite o valor pago: ");
		scanf("%f", &pago);
		
		if(pago >= venda)
		{
			status = 1;
		}
		else
		{
			printf("Valor pago insuficiente\n");
			status = 0;
		}
	}
	troco = pago - venda;
	printf("Venda: %.2f\n", venda);	
	printf("Pago : %.2f\n", pago);
	printf("Troco: %.2f\n", troco);
}
