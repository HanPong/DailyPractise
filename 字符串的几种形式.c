//���ܣ��ַ����ļ�����ʽ ʱ�䣺2018.2.16
//�����ǳ����б�ʾ�ַ����ļ�����ʽ
//puts()����ֻ��ʾ�ַ����������Զ��ں�����ϻ��з�  
#include<stdio.h>
#define MSG "I am a symbolic string constant."//Ԥ��������һ���ַ���MSG��Ҫ��˫����
#define MAXLENGTH 81

int main(void)
{
	char words[MAXLENGTH]="I am a string in an array.";//�ַ�����
	const char *pt1="Something is pointing at me.";//ָ���ʾ�������ַ��� 
	puts(MSG);//puts����
	puts(words);//puts�ַ�����
	puts(pt1);
	words[8]='p';
	puts(words);


	return 0;

}