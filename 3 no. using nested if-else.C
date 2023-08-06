#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("enter the value of A : ");
	scanf("%d",&a);
	printf("enter the value of B : ");
	scanf("%d",&b);
	printf("enter the value of C : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("A is maximum");
		}
		else
		{
			printf("C is maximum");
		}
	}
	else
	{
		if(b>c)
		{
			printf("B is maximum");
		}
		else
		{
			printf("C is maximum");
		}
	}
	
}

