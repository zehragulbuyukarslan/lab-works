#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("birinci sayiyi giriniz:\n");
	int a;
	scanf("%d", &a);
	printf("ikinci sayiyi giriniz:\n");
	int b;
	scanf("%d", &b);
	int c;
	c=a;
	a=b;
	b=c;
	printf("birinci sayi:\n %d", a);
	printf("\nikinci sayi:\n %d", b);
	return 0;
}
