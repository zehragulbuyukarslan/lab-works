#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("bir tamsayi giriniz:\n");
	int a;
	scanf("%d", &a);
	if (a%2==0){
		printf("sayi cifttir");
		}
	else printf("sayi tektir");
	return 0;     
}


