#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b;
	printf("\nenter the first value:\n");
	scanf("%d", &a);
	printf("\nenter the second value:\n");
	scanf("%d", &b);
	if(a>50&&b>50)
	    printf("sum of numbers: %d",a+b);
	else
	    printf("you entered wrong number!");

}
