#include<stdio.h>
void main()
{
	char c;
	printf("������һ����ĸ:\n");
	scanf("%c",&c);
	if((c>='A')&&(c<='Z'))/*�ر�ע���ַ�Ҫ�ӵ�����*/
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