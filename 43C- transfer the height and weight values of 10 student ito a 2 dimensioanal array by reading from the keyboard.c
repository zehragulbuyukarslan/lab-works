#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int arr[10][2];
	int i, j, sum_h, sum_w;
	
	sum_h=0;
	sum_w=0;
	
	for(i=0; i<10; i++){
		
		printf("\n enter %d. student's height and weight: ",i+1);
		
		for(j=0; j<2; j++){
			scanf("%d",&arr[i][j]);
			
			if(j==0)
			sum_h+=arr[i][j];
			
			else
			sum_w+=arr[i][j];
		}		
	}
	
	printf("\n             heights   weight   ");
	
	for(i=0; i<10; i++){
		printf("\n");
		printf("%d. student",i+1);
		for(j=0; j<2; j++)
		printf("%8d",arr[i][j]);
	}
	
	printf("\n\n average of heights: %d",sum_h/10);
	printf("\n average of weight: %d\n\n", sum_w/10);
}

















