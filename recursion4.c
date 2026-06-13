#include<stdio.h>
int gcd(int ,int);
void main()
{
	int a,b;
	printf("Enter any two positive integers : ");
	scanf("%d %d",&a,&b);
	printf("GCD of %d and %d is %d",a,b,gcd(a,b));
}
int gcd(int x,int y)
{      
	if(y==0)
		return x;
	else
	return gcd(y,x%y);
}
