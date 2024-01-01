#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float i,n;
	i=-9999999;
	for(a=1; a<=10; a++){
		printf("\n enter %d. number: ",a);
		scanf("%f",&n);
		if(n>i)
		i=n;
	}
	printf("\n the greatest number: %f" ,i);
	
}
