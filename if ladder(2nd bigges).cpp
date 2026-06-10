#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any 3 integers:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)		
	{   if(b>c)
	printf(" b is second biggest");
	else
	printf("c is second biggest");
	}
	else if(b>c)
	{ if(a>c)
	    printf("a is second biggest");
	    else
	    printf("b is secound biggest");
	}
	else
	{ if(a>b)
		printf("a is second biggest");
		else
		printf("b is secound biggest");
		return 0;		
	}
	
	
	
}








