//���ܣ�����strlen���������ַ������ȣ����ض�λ���ϵ��ַ��á�\0���滻���Ӷ���ֹ��ӡ��
//ʱ�䣺2018.2.17
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

void fit(char *string,unsigned int size)//����size
{
	if(strlen(string)>size)
		string[size]='\0';

}