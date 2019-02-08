#include<stdio.h>
char *myStrcat(char *s1, char*s2);/*定义一个指针类型的函数，函数名前*号*/
int main()
{
	char *aPtr;
	char a[50] = "student!\n\t";
	char *bPtr = "teacher";
	aPtr = myStrcat(a, bPtr);/*这些都是地址*/
	printf("%s\n", aPtr);
	return 0;
}
char *myStrcat(char *s1, char *s2)
{
	char *p = s1;
	while (*s1)
		s1++;
	while (*s1++=*s2++);
	return p;
}