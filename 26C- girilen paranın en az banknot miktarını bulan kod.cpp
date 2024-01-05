#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("para miktari giriniz:\n");
	int p;
	scanf("%d", &p);
	int b;
	b=(p/100);
	printf("100luk banknot miktari: %d\n", b);
	p=(p%100);
	b=(p/50);
	printf("50lik banknot miktari: %d\n", b);
	p=(p%50);
	b=(p/20);
	printf("20lik banknot miktari: %d\n", b);
	p=(p%20);
	b=(p/10);
	printf("10luk banknot miktari: %d\n", b);
	return 0;
}
