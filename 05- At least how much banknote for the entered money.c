#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m,b;
	printf("\nenter the amount of money:\n");
	scanf("%d", &m);
	b=m/200;
	m=m%200;
	b+=m/100;
	m=m%100;
	b+=m/50;
	m=m%50;
	b+=m/20;
	m=m%20;
	b+=m/10;
	m=m%10;
	b+=m/5;
	printf("you need at least %d banknote for this money!",b);
	
}
