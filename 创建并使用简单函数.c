//���ܣ�����һ����һ�д�ӡ40���Ǻŵĳ��򣬲��ڳ���ͷ�ͽ�β���øú���
//ʱ�䣺2018.2.12
/*#include<stdio.h>
//����������Ԥ������ָ��
#define NAME "Hanpeng,INC."/
#define ADDRESS "Heilongjiang,Shuangyashan"
#define PLACE "#61,part1,501"
#define WIDTH 40//�Ǻ�����

void starbar(void);//��һ��void������û�з���ֵ���ڶ���void��������������
int main(void)
{
	starbar();
	printf("%s\n",NAME);
	printf("%s\n",ADDRESS);
	printf("%s\n",PLACE);
	starbar();

	return 0;

}
void starbar(void)
{
	int count;

	for(count=1;count<WIDTH;count++)
		putchar('*');
	putchar('\n');
}*/
//���ϳ��򾭹����ԣ�û������

//���ܣ�ʹ��������־��� ʱ�䣺2018.2.12
#include<stdio.h>
#include<string.h>//strlen����ԭ��
#define NAME "GIAGTHINK,INC."
#define ADDRESS "101 Megapolis,CA 94904"
#define PLACE "Megabuck Plaza,9"
#define WIDTH 40
#define SPACE ' '

void show_n_char(char ch,int num);//��һ��void������û�з���ֵ���ڶ���void�������Ĳ�����һ�����ַ��ͣ�һ��������
int main(void)
{

	int spaces;


	show_n_char('*',WIDTH);
	putchar('\n');
	show_n_char(SPACE,12);
	printf("%s\n",NAME);
	spaces=(WIDTH-strlen(ADDRESS))/2;//����Ҫ�������ٸ���λ strlen��������ռ�˶��ٿ�λ

	show_n_char(SPACE,spaces);
	printf("%s\n",ADDRESS);
	show_n_char(SPACE,(WIDTH-strlen(PLACE))/2);

	printf("%s\n",PLACE);
	show_n_char('*',WIDTH);
	
	putchar('\n');

	return 0;

}
void show_n_char(char ch,int num)
{
	int count;

	for(count=1;count<=num;count++)
		putchar(ch);
}





















