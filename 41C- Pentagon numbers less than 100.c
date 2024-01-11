#include <stdio.h>

int main(void)
{
	int pn,i;
	
	printf("\n Pentagon numbers less than 100: \n\n");
	
	for(i=0; pn<100; i++){
		pn=i*(3*i-1)/2;
		printf(" %d\t",pn);
	}
    printf("\n\n");
}

