#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("a sayiyini giriniz:\n");
	int a;
	scanf("%d", &a);
	printf("\nb sayiyini giriniz:\n");
	int b;
	scanf("%d", &b);
	printf("\nc sayiyini giriniz:\n");
	int c;
	scanf("%d", &c);
	if (a==b) {
		if (b==c) {
			printf("butun sayilar esittir");}
		else if (b>c) {
			printf("a ve b sayilari en buyuktur");}
	}
	if (a==c) {
		if (a>b) {
			printf("a ve c sayilari en buyuktur");}
	
	}
	if (b==c){
		if (b>a) {
			printf("b ve c sayilari en buyuktur");}
	}
	if (a>b&&a>c){
		printf("a sayisi en buyuktur");}
	if (b>c&&b>a){
		printf("b sayisi en buyuktur");	
    }
    if (c>a&&c>b){
    	printf("c sayisi en buyuktur");
	}
    
	return 0;
}
