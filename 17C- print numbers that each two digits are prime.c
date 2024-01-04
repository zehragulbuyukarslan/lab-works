#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b;
	a=22;
	printf("%d",a);
	while(a<=77){
		a++;
		b=a/10;
		if((a%10==2||a%10==5||a%10==3||a%10==7)&&(b==2||b==3||b==5||b==7))
		printf("\t%d",a);
	}
	return 0;
}
