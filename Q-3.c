#include<stdio.h>

void main()
{
	int area,b,h;
	
	printf("enter the value of base:-");
	scanf("%d",&b);
	printf("enter the value of height:-");
	scanf("%d",&h);
	
	area=(b*h)/2;
	
	printf("area of triangle is %d",area);
}
