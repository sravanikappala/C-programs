#include<stdio.h>
int main()
{  int n;
printf("enter any value ");
scanf("%d",&n);
if(n%4==0&&n%100!=0||n%400==0){
	printf("leap year");
}
else{
	printf("normal year");
}	
	
	return 0;
}
