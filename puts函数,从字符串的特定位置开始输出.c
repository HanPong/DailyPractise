//功能：从字符串的特定位置开始输出 时间：2018.2.16
#include<stdio.h>
#define DEF "I am a #define string"
int main(void)
{
	char str1[80]="An array was initialized to me.";//定义一个数组型字符串
	const char *str2="A pointer was initialized to me.";//定义一个指针类型字符串

	puts("I am a argument to puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);//从第一个数组的第5个开始输出
	puts(str2+4);//从第二个数组的第4个开始输出
    //这两种方法适用于这两种方式定义的字符串（数组型，指针型）
	return 0;
}