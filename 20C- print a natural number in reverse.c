#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n,reverse;
	printf("\n enter a number:");
	scanf("%d", &n);
	reverse=0;
	while(n>0){
		reverse= reverse*10+n%10;
		n/=10;
	}
	printf("\nreverse version of the number: %d", reverse);
	
}
