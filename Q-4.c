#include<stdio.h>

void main()
{
	int interest,p,r,t;
	
	printf("enter the value of principal amount:-");
	scanf("%d",&p);
	printf("enter the value of rate per annum:-");
	scanf("%d",&r);
	printf("enter the value of time:-");
	scanf("%d",&t);
	
	interest=(p*r*t)/100;
	
	printf("simple interest is %d",interest);
}
