#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a;
	printf("\n1000 ile 2000 arasindaki cift sayilar:\n\n");
	a=1000;
	while(a<=2000){
		printf("%d\t", a);
		a=a+2;
	}
	printf("\n\n\n");
}
