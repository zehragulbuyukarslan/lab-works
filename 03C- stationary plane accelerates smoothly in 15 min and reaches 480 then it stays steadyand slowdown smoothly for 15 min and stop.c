#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t;
	
	//The stationary plane accelerates smoothly in 15 minutes, its speed reaches 480, then it stays steady for 20 minutes and slows down smoothly for 15 minutes and stops.//
	
	printf("\nenter the time\n");
	scanf("%d", &t);
	if(t<0)
	printf("\nyou entered wrong value!");
	else if(t>50)
	printf("\nyou entered more value than flight time!");
	else if(t<=15)
	printf("velocity of plane at that time: %d", t*32);
	else if(t<=35)
	printf("velocity of plane at that time: 480");
	else
	printf("velocity of plane at that time: %d", (50-t)*32);
}
