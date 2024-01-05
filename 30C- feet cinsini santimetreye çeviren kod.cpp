#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("\nfeet uzunlugu giriniz:\n\n");
	float f,c;
	scanf("%f", &f);
	if (f<0){
		printf("yanlis giris");
	}
	else{
		(c=(30.48)*f);
		printf("\n%f feet %f santimetredir\n\n\n\n\n", f,c);
	}
	return 0;
}
