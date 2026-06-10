#include<stdio.h>
int main()
{
  int n,r,s=0,temp;
  printf("enter any value");
  scanf("%d",&n);
  temp=n;
  while(temp!=0)	
  {   r=temp%10;
      s=s*10+r;
      temp=temp/10;  	
}
	if(n==s)
	printf("pallindrome");
	else
	printf("not pallindrome");
	return 0;
	
	
}
