#include<stdio.h>
void print(int);
void main()
{
	int n;
	printf("enter values : ");
	scanf("%d",&n);
	print(n);
}
void print(int a)
{
	if(a<1)
	return ;
	else
	printf("%d\n",a);
	print(a/2);

}
