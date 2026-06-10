#include<stdio.h>
void main()
{
	int n,i,rem,fact=1,result=0;	
	printf("enter integer:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		for(i=0;i<=rem;i++)
		{ 
		   fact = fact*i;
		}
		 result=result+fact;
		 fact=1;
		 n=n/10;
	}
	if (result==n)
	printf("strong number");
	else
	printf("not strong number");	
}
