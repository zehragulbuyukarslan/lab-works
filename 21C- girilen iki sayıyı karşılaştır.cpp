#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	printf("enter two numbers:\n");
	float a,b;
	scanf("%f %f", &a, &b);
	if (a>b){
		printf("a is greater than b");
	}
	else if (a==b){
		printf("a and b are equal");
	}
	else printf("b is greater than a");
	
	
}
