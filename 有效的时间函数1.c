//���ܣ�ʱ�亯�� ʱ�䣺2018.2.14
//ע�ͣ�ʱ�亯�����Զ����char������Ȼ���������������
#include<time.h>
#include<stdio.h>
char shijian();//�Զ����ʱ�亯����char��ʽ
int main()
{
	printf("****************************\n");
	printf("*********ʱ�亯��1**********\n");
	printf("******�������α�׼ʱ��******\n");
	shijian();
	printf("****************************\n");
	
}


char shijian()//�Զ����ʱ�亯��
{
	time_t timep;

	time(&timep);

	printf("%s",asctime(gmtime(&timep)));
}
