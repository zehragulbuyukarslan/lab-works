#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int row,col;
	
	printf("\n enter row amount: ");
	scanf("%d",&row);
	
	printf("\n enter column amount: ");
	scanf("%d",&col);
	
	int i,j;
	int a[row][col];
	int b[row][col];
	int c[row][col];
	
	printf("\n first table: ");
	for(i=0; i<row; i++){
		printf("\n %d. row numbers:\n",i+1);
		for (j=0; j<col; j++)
		scanf("%3d",&a[i][j]);
	}
	
	printf("\n\n");
	printf("\n second table: ");
	
	for(i=0; i<row; i++){
		printf("\n %d. row numbers:\n",i+1);
		for (j=0; j<col; j++)
		scanf("%3d",&b[i][j]);
	}
	
	printf("\n\n");
	printf("\n sum of tables:\n");
	
	for(i=0; i<row; i++){
		for (j=0; j<col; j++)
		c[i][j]=a[i][j]+b[i][j];
	}
	
	
	for(i=0; i<row; i++){
		for (j=0; j<col; j++)
		printf("%4d",c[i][j]);
		printf("\n");
	}
	
	
}
































