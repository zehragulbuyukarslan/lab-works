#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("ogrenci no giriniz:");
	int n;
	scanf("%d", &n);
	printf("vize notu giriniz:");
	int v;
	scanf("%d", &v);
	printf("final notu giriniz:");
	int f;
	scanf("%d", &f);
	int x;
	x=(v*4/10)+(f*6/10);
	printf("%d numarali ogrencinin notu: %d", n,x);
	return 0;
}
