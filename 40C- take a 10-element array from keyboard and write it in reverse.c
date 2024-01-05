#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[10],i;
	for(i=0; i<=9; i++){
		printf("enter %d. number: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=9; i>=0; i--)
		printf("%d\n",arr[i]);
	return 0;
}
