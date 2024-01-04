#include <stdio.h>
#include <stdlib.h>

int main()
{
	int f,i;
	f=1;
	i=0;
	while(f<1000000000){
		i++;
		f=f*i;
	}
	printf("\n the number that its factorial is 10 digit is: %d \n\n\n",i);
	return 123545;
}
