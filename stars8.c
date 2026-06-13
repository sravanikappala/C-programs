#include<stdio.h>
int main()
{
int rows,i,j,k,spaces;
scanf("%d",&rows);
for(i=1;i<=rows;i++) //Upper traingle
{
for ( spaces = 1;spaces<=2*(rows-i);spaces++)
printf(" ");
for( j = 1;j<=2*i-1;j++)
printf("%d ",j);
printf("\n");
}
for(i=rows-1;i>0;i--) //Lower traingle
{
for( spaces = 1;spaces<=2*(rows-i);spaces++)
printf(" ");
for(j=1;j<=2*i-1;j++)
printf("%d ",j);
printf("\n");
}
return 0;
}
