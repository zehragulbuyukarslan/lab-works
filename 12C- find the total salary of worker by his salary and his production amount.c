#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int s,aa;
	printf("\n enter the salary of the worker: ");
	scanf("%d",&s);
	if(s<0)
	printf("\n you entered wrong value!");
	else 
	printf("\n enter the produced appliance amount: ");
	scanf("%d", &aa);
	if(aa<0)
	printf("\n you entered wrong value!");
	else if(aa<10)
	s+=aa*5000;
	else if(aa<30)
	s+=aa*8000;
	else
	s+=aa*12000;
	printf("total salary of the worker: %d", s);
	
}
