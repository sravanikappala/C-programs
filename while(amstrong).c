#include<math.h> 
#include<stdio.h>
int main()
{ int n,temp,c=0,sum=0,rem;
printf("enter any integer value");
scanf("%d",&n);
temp=n;
while(temp!=0)
{  c++;
   temp=temp/10;	
}
temp=n;
while(temp!=0)
{ rem=temp%10;
  sum=sum+pow(rem,c);
  temp=temp/10;	
}
if(sum==n)	
printf("amstrong");
else
printf("not amstrong");
return 0;	
}

