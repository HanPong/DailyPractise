//功能：字符串的几种形式 时间：2018.2.16
//下面是程序中表示字符串的几种形式
//puts()函数只显示字符串，并且自动在后面加上换行符  
#include<stdio.h>
#define MSG "I am a symbolic string constant."//预处理，定义一个字符串MSG，要加双引号
#define MAXLENGTH 81

int main(void)
{
	char words[MAXLENGTH]="I am a string in an array.";//字符数组
	const char *pt1="Something is pointing at me.";//指针表示法创建字符串 
	puts(MSG);//puts函数
	puts(words);//puts字符数组
	puts(pt1);
	words[8]='p';
	puts(words);


	return 0;

}