#include<stdio.h>

int main()
{
	int x,y;
	
	for(x = 10 ; x >0 ; x--)
	{
		printf("Oi, tudo bem!\n");
	}
	
	for(x = 0 ; x < 10 ; x++)
	{
		printf("%d ", x);
	}
	
	for(x = 10 ; x >0 ; x--)
	{
		printf("%d ", x);
	}
	printf("\n");
	for(x = 0 ; x <= 10 ; x++)
	{
		printf("Tabuada %d \n", x);
		for(y = 0 ; y <= 10 ; y++)
		{
			printf("%d X %d = %d\n",x,y, x*y);
		}		
	}
}
