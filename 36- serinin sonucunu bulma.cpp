#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x,l,i;
	double r,p,ii;
	
	                 printf("enter the value of x number:\n");
	                 scanf("%d", &x);
	                 printf("enter the value of the length of the serie:\n");
	                 scanf("%d", &l);
    r=1;                 
    if(l==0)    printf("result: %.3lf", r);
    
	else{
		i=1;
		p=1;
		ii=1;
		    while(i<=l){
		    	    ii=ii*i;
			        p=p*x;
					r=r+p/ii;
					i=i+1;              
	    	}
	    printf("result: %.3lf", r);
    }
	return 0;              
}
