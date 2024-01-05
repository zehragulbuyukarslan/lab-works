#include <stdlib.h>
#include <stdio.h>

int main()
{
	int n,arr[5],i;
	printf("\n enter a max 5 digit number: ");
	scanf("%d",&n);
	if(n>99999||n<-99999)
	printf("\n you entered wrong number!");
	else{
		i=0;
		if(n<0) n*=-1;
	while(n>0){
	    arr[i]=n%10;
	    printf("%d\n",arr[i]);
	    n/=10;
	    i++;
	}
	}
	return 12;
}
