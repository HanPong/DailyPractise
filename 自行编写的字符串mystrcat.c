#include<stdio.h>
char *myStrcat(char *s1, char*s2);/*����һ��ָ�����͵ĺ�����������ǰ*��*/
int main()
{
	char *aPtr;
	char a[50] = "student!\n\t";
	char *bPtr = "teacher";
	aPtr = myStrcat(a, bPtr);/*��Щ���ǵ�ַ*/
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