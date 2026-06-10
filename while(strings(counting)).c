#include<stdio.h>
int main()
{
	char str[100];
		int alpha,space,digits,spc_char,i;
		printf("Enter any sentences : ");
	scanf("%[^\n]s",str[i]);
	alpha=digits=space=spc_char=0;
	i=0;
	while(str[i]!='\0')
	{
		if((str[i]>='a'&&str[i]<='z')|| (str[i]>='A'&&str[i]<='Z'))
		      alpha++;
		    else
		      if(str[i]==' ')
		      space++;
		      else
		      if(str[i]>=0&&str[i]<=9)
		      digits++;
		      else
		      spc_char++;		      
	}
	printf("alphabets are %d\n",alpha);
	printf("Digits are %d\n",digits);
	printf("spaces are %d\n",space);
	printf("special characters are %d\n",spc_char);
	return 0;
}
