#include<stdio.h>
int main()
{  int i,n, space,j;
printf("enter any  value:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(space=1; space<=(n-i); space++)
	{
		printf(" ");
	}
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}
return 0;	
}

