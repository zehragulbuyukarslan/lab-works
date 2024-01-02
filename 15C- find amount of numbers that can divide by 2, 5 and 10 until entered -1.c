#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n,t,f,tf;
	t=0;
	f=0;
	tf=0;
	while(n!=-1)
	{
		printf("\n enter a number: ");
		scanf("%d",&n);
		if(n%2==0)
		t+=1;
		if(n%5==0)
		f+=1;
		if(n%10==0)
		tf+=1;
	}
	printf("\n amount of numbers that can divide by 2: %d", t);
	printf("\n amount of numbers that can divide by 5: %d", f);
	printf("\n amount of numbers that can divide by 2 and 5: %d", tf);
	
}
