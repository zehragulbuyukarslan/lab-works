#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("\nsicakligi giriniz:\n\n");
	int a;
	scanf("%d", &a);
	if (a<0) {
		printf("\nsicaklik donma noktasindan dusuktur\n\n");}
	else if (a==0){
		printf("\nsicaklik donma noktasina esittir\n\n"); }
	else printf("\nsicaklik donma noktsindan yuksektir\n\n");	
	return 0; 		
}
