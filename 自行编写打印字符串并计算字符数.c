//���ܣ����б�д��ӡ�ַ����������ַ��� ʱ�䣺2018.2.17
#include<stdio.h>
#define LETTERS "abc defg edhg"//��һ�ֶ�����ʽ
int put2(const char *string);
void main()
{
	const char x[4]="ABS";//�ڶ��ֶ�����ʽ
    put2(LETTERS);//��һ�ε���
	put2(x);//�ڶ��ε���
	put2("HanPeng");//�����ֶ�����ʽ
}
int put2(const char *string)
{
	int count=0;
	while(*string)//��*string���ַ�����һ����Ϊ0����Ϊ�棬��������
	{
		putchar(*string++);//�������У���ӡ�ַ�
		count++;

	}
	putchar('\n');
	printf("%d\n",count);

	return(count);
}