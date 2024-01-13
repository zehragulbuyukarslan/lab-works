#include <stdio.h>

int main(void)
{
	char str[80];
	int k=0;
	
	printf(" enter a string:\n ");
	
	gets(str);
	printf("\n ");
	
	while(str[k]!='\0'){
		if((str[k]>=65&&str[k]<=90)||(str[k]>=97&&str[k]<=122))
		printf("%c",str[k]);
		k++;
	}
	
}
