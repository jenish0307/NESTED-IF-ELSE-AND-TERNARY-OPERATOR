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
	printf("enter the value of D : ");
	scanf("%d",&d);
	
	(a>b)   ? (a>c) ? (a>d) ? printf("A is max"): printf("D is max") : (c>d) ? printf("C is max"): printf("D is max")
			: (b>c) ? (b>d) ?  printf("B is max"):  printf("D is max") : (c>d) ? printf("C is max"): printf("D is max");
}4