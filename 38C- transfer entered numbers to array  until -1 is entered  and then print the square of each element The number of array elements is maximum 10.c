#include <stdlib.h>
#include <stdio.h>

int main()
{
	int arr[10],i;
	i=-1;
	printf("\n");
	while(i<9&&arr[i]!=-1){
		i++;
		printf(" enter %d. number: ",i+1);
		scanf("%d",&arr[i]);	
	}
	printf("\n");
	while(i>-1){
		printf(" square of %d. number: %d \n", i+1,arr[i]*arr[i]);
		i--;
	}
	return 0;
}
