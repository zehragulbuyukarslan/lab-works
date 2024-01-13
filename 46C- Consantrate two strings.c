#include <stdio.h>

int main(void)
{
	char str1[40], str2[40], str3[80];
	int k=0;
	int i=0;
	
	printf("\n");
	  gets(str1);
	printf("\n");
	  gets(str2);
	printf("\n");
	
	while(str1[k]!='\0'){
		str3[k]=str1[k];
		k++;
	}
	
	while(str2[i]!='\0'){
		str3[k]=str2[i];
		i++;
		k++;
		
	}
	str3[k]='\0';
	
	puts(str3);
	
	
}
