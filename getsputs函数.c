#include<stdio.h>
#define STLEN 81
int main(void)
{
	char words[STLEN];//����һ���ַ�����
	puts("Enter a string,please\n");
	gets(words);//�÷�
	printf("Your string twice:\n");
	printf("%s\n",words);//��һ���������
	puts(words);
	puts("���");



	return 0;



}