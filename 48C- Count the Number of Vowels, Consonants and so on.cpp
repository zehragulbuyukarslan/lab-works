#include <stdio.h>

int main(void)
{
	char s[80];
	int v=0, k, c=0, d=0, es=0;
	
	gets(s);
	
	for(k=0; s[k]!='\0'; k++){
		if(s[k]=='a'||s[k]=='e'|| s[k]=='ý'||s[k]=='i'||s[k]=='o'||s[k]=='ö'||s[k]=='u'||s[k]=='ü')
		v++;
		else if(s[k]=='0'||s[k]=='1'||s[k]=='2'||s[k]=='3'||s[k]=='4'||s[k]=='5'||s[k]=='6'||s[k]=='7'||s[k]=='8'||s[k]=='9')
		d++;
		else if((s[k]>=65&&s[k]<=90)||(s[k]>=97&&s[k]<=122))
		c++;
		else if(s[k]==' ')
		es++;	
	}
	
	printf("\n vowels: %d \n consonants: %d \n digits: %d \n empty spaces: %d \n\n\n",v,c,d,es);
	
}
