#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x;
	
	for(x = 0 ; x <= 10 ; x++)
	{
		printf("posicao %d\n", x);
	}
	
	for(x = 10 ; x >= 0 ; x--)
	{
		printf("posicao %d\n", x);
	}
}
