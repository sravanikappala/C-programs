#include<stdio.h>
int main()
{  
int sal;
double tax;
printf("enter any value of income :");
scanf("%d",&sal);
if(sal<=250000)
{ 
 printf("no tax");
}
else if(sal>=250001 && sal<=500000)
{
tax=sal*0.05;
printf("%lf",tax);
}
else if(sal>=500001 && sal<=1000000)
{
tax=sal*0.2;
printf("%lf",tax);
}
else
{
tax=sal*0.3;
printf("%lf",tax);
}
return 0;	
}
	
	
	
	
	

