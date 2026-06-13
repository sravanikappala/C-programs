#include<stdio.h>
#include<string.h>
int main()
{    char s1[50],s2[50];
     int i;
     printf("enter the string 1 :");
     gets(s1);
     printf("enter the string 2 : ");
     gets(s2);
     i = strcmp(s1,s2);
     if(i==0)
     printf("equal");
     else
     printf("not equal");
     return 0;
	
	
}
