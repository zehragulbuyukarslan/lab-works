#include <stdio.h>
#include <stdlib.h> 

int main()
{
	int a,b,sum,i;
	sum=0;
	i=0;
	b=-9999999;
	while(a!=b){
		printf("\n enter a number: ");
		scanf("%d",&a);
		i++;
		sum+=a;
		if(a!=b){
			printf("\n enter a number: ");
	    	scanf("%d",&b);
	    	i++;
		    sum+=b;
		}
		
	}
	printf("avarage of numbers: %d", (sum-b)/(i-1));
	return 1;
}
