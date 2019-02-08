#include<stdio.h>
#define STLEN 81
int main(void)
{
	char words[STLEN];//定义一个字符数组
	puts("Enter a string,please\n");
	gets(words);//用法
	printf("Your string twice:\n");
	printf("%s\n",words);//第一种输出方法
	puts(words);
	puts("完毕");



	return 0;



}