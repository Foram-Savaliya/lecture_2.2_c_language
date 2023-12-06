#include<stdio.h>

void main()
{
	int r;
	const float pi=3.14;
	float area;
	
	printf("enter your radius value:-");
	scanf("%d",&r);
	
	area=pi*r*r;
	
	printf("area of circle is %.3f",area);
}
