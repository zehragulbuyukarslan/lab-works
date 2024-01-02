#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a,b,c,d;
	printf("\nenter the first side of rectangle:\n");
	scanf("%d",&a);
	printf("\nenter the second side of rectangle:\n");
	scanf("%d", &b);
	printf("\nenter the third side of rectangle:\n");
	scanf("%d", &c);
	printf("\nenter the fourth side of rectangle:\n");
	scanf("%d",&d);
	if(a<=0||b<=0||c<=0||d<=0)
	printf("\nyou entered wrong value!");
	else if((a==b)&&(b==c)&&(c==d))
	printf("\nthis rectangle is a square!");
	else 
	printf("this rectangle is not a square!");
	
}
