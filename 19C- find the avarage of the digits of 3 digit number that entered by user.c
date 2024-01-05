#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n,nn,i;
	float a,sum;
	printf("\n enter a 3 digit number: ");
	scanf("%d",&n);
	if(n>999||n<100)
	printf("\n you entered wrong number!");
	else{
    	nn=n;
	    sum=0;
    	for(i=1; i<=3; i++){
		sum+=n%10;
		n/=10;
	}
	a=sum/3;
	printf("\n avarage of the digis of %d is %.2f\n\n\n",nn,a );
	}
	return 0;
}
