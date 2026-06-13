#include<stdio.h>
int sod(int);
void main()
{
	int n,s;
	printf("Enter value : ");
	scanf("%d",&n);
	s = sod(n);
	printf("Sum of digits of %d is %d",n,s);
}
int sod(int n)
{
	if(n==0) 
	return 0;
	else
	return n%10 + sod(n/10);
}

