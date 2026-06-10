#include<Stdio.h>
int main()
{  int i,n,r=0;
printf("enter any integer");
	scanf("%d",&n);
	while(n>0)
	{
	r=r*10+n%10;
	n=n/10;	
		
}	
			
printf("reverse of it is %d",r);
	return 0;
}
