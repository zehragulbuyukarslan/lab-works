#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,r,c,i;
	printf("\n enter the value of dividend: ");
	scanf("%d",&a);
	printf("\n enter the value of divider: ");
	scanf("%d",&b);
	r=a%b;
	c=0;
	i=a;
	while(i>=b){
		i-=b;
		c++;
	}
	printf("\n CONCLUSION of dividing %d to %d is: %d\n" ,a,b,c);
	printf("\n REMAIN of dividing %d to %d is: %d\n\n\n",a,b,r);
}
