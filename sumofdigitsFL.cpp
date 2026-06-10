#include<stdio.h>
int mian()
{ int n,s=0;
printf(" enter any value");
scanf("%d",&n);
while(n>=0)
{ s=s+n%10;
 n=n/10;
 printf(" %d",s);
 return 0;	
	
}
	
	
	
	
	
}
