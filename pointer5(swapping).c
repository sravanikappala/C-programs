#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("Enter any two intrger : ");
	scanf("%d %d",&a,&b);
	printf("Before swapping a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("after swpaping a=%d,b=%d\n",a,b);
}
void  swap(int *a,int * b)
{
	int t;
	t=*a;
	*a=*b;
	*b=t;
	
}
