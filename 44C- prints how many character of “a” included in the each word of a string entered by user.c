#include <stdio.h>


int main(void)
{
	char s[80];
    int i=0;
    int ii=1;
    int k=0;
	
	printf("\n ");
	gets(s);
	
	while(s[k]!='\0'){
		
		while(s[k]!=' '){
		if(s[k]=='a')
		i++;
		k++;
	}
	printf("\n %d. word includes %d number of character a",ii,i);
	ii++;
	k++;
	i=0;
	}
     
    printf("\n\n");
	
}
