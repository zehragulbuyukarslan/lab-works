#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,n;
	printf("\n predict the number that holds by computer: ");
	n=rand()%101;
	for(a=1; a<=10; a++){
		scanf(" %d",&b);
		if(b==n){
	    	printf(" Congratulations! you found the number in the trial of %d\n",a);
		    a=11;
	    }
	    else if(a<10)
	    printf(" you can not find the number of %d attempts try again\n",a);
		
		else
		printf(" Sorry you can not find the number of %d attempts!\n",a);
	}
	printf(" the number was: %d\n\n\n",n);
}

