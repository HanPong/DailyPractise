#include<stdio.h>
#define N 100
void main()
{
	char str[N],strl[N];
	int i;
	gets(str);
	for(i=0;i<N;i++)
	{
       if((str[i]<='w'&&str[i]>='a')||(str[i]<='W'&&str[i]>='A'))
	   {
		   str[i]=str[i]+3;
	   }
	   else if((str[i]<='z'&&str[i]>='x')||(str[i]<='Z'&&str[i]>='Z'))
	   {
		   str[i]=str[i]-23;
	   }
	}
	puts(str);
}