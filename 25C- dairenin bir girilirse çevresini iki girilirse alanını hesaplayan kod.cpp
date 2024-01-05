#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("yaricap giriniz:\n");
	int r;
	scanf("%d", &r);
	printf("islem turu belirleyiniz:\n");
	int t;
	scanf("%d", &t);
	if (t==1){
		int cevre;
		cevre=2*3*r;
		printf("\n cevre: %d", cevre);
	}
	else if (t==2){
		int alan;
		alan=3*r*r;
		printf("\n alan: %d", alan);
	}
	else
	printf("yanlis giris!");
	return 0;
}
