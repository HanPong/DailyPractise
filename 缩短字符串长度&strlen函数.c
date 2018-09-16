//功能：利用strlen函数缩短字符串长度（将特定位置上的字符用‘\0’替换，从而阻止打印）
//时间：2018.2.17
#include<stdio.h>
#include<string.h>

void fit(char *,unsigned int);
int main(void)
{

	int i;
	char mesg[]="Thing shoule be as simple as possible,"
		"but not simpler";
	i=strlen(mesg);
	printf("%d\n",i);
	puts(mesg);
	fit(mesg,38);
	puts(mesg);
	puts("Let's look at some more of the string.");
	puts(mesg+39);
	
	

	return 0;
}

void fit(char *string,unsigned int size)//定义size
{
	if(strlen(string)>size)
		string[size]='\0';

}