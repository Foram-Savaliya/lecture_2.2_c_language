#include<stdio.h>

void main()
{
	int s1,s2,s3,s4,s5,s6,s7,s8,sum;
	float average,pr;
	
	printf("enter the sub-1:-");
	scanf("%d",&s1);
	printf("enter the sub-2:-");
	scanf("%d",&s2);
	printf("enter the sub-3:-");
	scanf("%d",&s3);
	printf("enter the sub-4:-");
	scanf("%d",&s4);
	printf("enter the sub-5:-");
	scanf("%d",&s5);
	printf("enter the sub-6:-");
	scanf("%d",&s6);
	printf("enter the sub-7:-");
	scanf("%d",&s7);
	printf("enter the sub-8:-");
	scanf("%d",&s8);
	
	sum=s1+s2+s3+s4+s5+s6+s7+s8;
	printf("sum of all subject marks is %d\n",sum);
	
	average=(s1+s2+s3+s4+s5+s6+s7+s8)/8;
	printf("your average marks is %.2f\n",average);
	
	pr=(sum*100)/800;
	printf("your percentage is %.2f\n",pr);
	
}
