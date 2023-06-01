#include<stdio.h>
#include<stdlib.h>

int main()
{
	int Val1;
	int Val2;
	int Media;
	
	printf("Digite um numero inteiro: ");
	scanf("%d", &Val1);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &Val2);
		
	Media = (Val1 + Val2)/2;
	
	system("CLS");
	
	printf("Media: %d \n", Media);
	
	system("PAUSE");
	
	system("CLS");
	
	if(Val1 > Val2)
	{
		printf("----- Super Media Calculator ------\n");
		printf("| Val 2 ------- Media ------ Val 1 |\n");
		printf("|  %d ---------  %d  --------  %d  |\n", Val2, Media, Val1);
		printf("|---------------------------------|");
	}
	else
	{
		printf("----- Super Media Calculator ------\n");
		printf("| Val 1 ------- Media ------ Val 2 |\n");
		printf("|  %d ---------  %d  --------  %d  |\n", Val1, Media, Val2);
		printf("|----------------------------------|");
	}
	
	
}
