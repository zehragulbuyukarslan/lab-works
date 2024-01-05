#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) { 
    printf("\nbirinci sayiyi giriniz:\n");
    int a;
    scanf("%d", &a);
    printf("ikinci sayiyi giriniz:\n");
    int b;
    scanf("%d", &b);
    int toplam;
    toplam=a+b;
    printf("sayilarin toplami:\n %d", toplam);
    printf("\n");
	return 0;
}
