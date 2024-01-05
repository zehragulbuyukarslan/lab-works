#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a,b,c;
	b=0;
	printf("bir sayi giriniz:\n");
	scanf("%d", &a);
	c=a;
	while(a>0){
		b=10*b+a%10;
		a=a/10;
	}
	if(b==c){
		printf("sayi polindromdur\n\n\n");
	}
	else{
		printf("sayi polindrom degildir\n\n\n");
	}
}
