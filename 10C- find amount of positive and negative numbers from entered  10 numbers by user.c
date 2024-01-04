#include <stdlib.h>
#include <stdio.h>

void main()
{
	int a,s,p,n;
	p=0;
	n=0;
	for(a=1; a<=10; a++){
	printf("\n enter %d. number: ",a);
	scanf("%d",&s);
	if(s<0) 
	n++;
	if(s>0)
	p++;
    }
    printf("\n amount of POSITIVE numbers: %d",p);
    printf("\n amount of NEGATIVE numbers: %d\n\n\n",n);
	
}
