//���ܣ����ַ������ض�λ�ÿ�ʼ��� ʱ�䣺2018.2.16
#include<stdio.h>
#define DEF "I am a #define string"
int main(void)
{
	char str1[80]="An array was initialized to me.";//����һ���������ַ���
	const char *str2="A pointer was initialized to me.";//����һ��ָ�������ַ���

	puts("I am a argument to puts().");
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(&str1[5]);//�ӵ�һ������ĵ�5����ʼ���
	puts(str2+4);//�ӵڶ�������ĵ�4����ʼ���
    //�����ַ��������������ַ�ʽ������ַ����������ͣ�ָ���ͣ�
	return 0;
}