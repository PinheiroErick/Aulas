#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y;
	
	for(x = 0 ; x <= 1000 ; x++)
	{
		printf("\nTabuada do %d\n", x);
		
		for(y = 0 ; y <= 1000 ; y++)
		{
			printf("%d X %d = %d\n", x, y, x*y);
		}
	}
}
