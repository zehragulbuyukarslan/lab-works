#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("\n1-10 arasi sayi giriniz:\n\n");
	int a,b;
	scanf("%d", &a);
	if ((a>10)||(a<1)) {
		printf("yanlis giris");}
    else{
    	b=a*a;
    	printf("\n%d\n\n\n", b);}
	
	return 0;
}
