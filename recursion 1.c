#include<stdio.h>
int fact(int);
void main()
{
	int n,f;
	printf("Enter any positive integer : ");
	scanf("%d",&n);
	f = fact(n);
	printf("factorial of %d is %d",n,f);
}
int fact(int num)
{
	if(num == 1)
	return 1;
	else	
	return num *fact(num-1);
}

