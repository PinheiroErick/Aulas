#include<stdio.h>

int main()
{
	float p1,p2,p3;
	float mp1,mp2,mp3;
	float mf;
	
	printf("Digite a nota da prova 1: ");
	scanf("%f", &p1);
	
	printf("Digite a nota da prova 2: ");
	scanf("%f", &p2);
	
	printf("Digite a nota da prova 3: ");
	scanf("%f", &p3);
	
	mp1 = p1 * 0.20;
	mp2 = p2 * 0.30;
	mp3 = p3 * 0.50;
	
	mf = mp1 + mp2 + mp3;
	
	printf("Media: %.2f", mf);
}
