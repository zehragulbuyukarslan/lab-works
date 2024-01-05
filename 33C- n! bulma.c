#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int n,r;
	printf("bir sayi giriniz:\n");
	scanf("%d", &n);
	r=1;
	while(n>0){
		r=r*n;
		n=n-1;
        } 
    printf("sayinin faktoriyeli: %d",r);
}
