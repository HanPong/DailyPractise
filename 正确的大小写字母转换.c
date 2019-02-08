#include<stdio.h>
void main()
{
	char c;
	printf("请输入一个字母:\n");
	scanf("%c",&c);
	if((c>='A')&&(c<='Z'))/*特别注意字符要加单引号*/
	{
		c+=32;
			printf("%c",c);
	}
	if((c>='a')&&(c<='z'))
	{
		c=c-32;
		printf("%c",c);
	}
	
}