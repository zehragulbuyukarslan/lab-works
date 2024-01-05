#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	float arr[8],sum;
	for(i=0; i<=7; i++){
		printf("\n enter %d. number:  ",i+1);
		scanf("%f",&arr[i]);
		sum=sum+arr[i];
	}
	printf("\n avarage of numbers is:  %.3f",sum/8);
}
