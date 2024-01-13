#include <stdio.h>

//take two words by user and print the reverse of first word after second word//
int main(void)
{
	char str1[80], str2[80];
	int k=0;
	
	printf("\n ");
	gets(str1);
	
	printf("\n ");
	gets(str2);
	
	printf("\n reverse of first string after second string is: \n ");
	
	
	while(str1[k]!='\0')
	k++;
	
	printf("%s ",str2);
    for(k=k-1; k>=0; k--)
    printf("%c",str1[k]);

	
}




