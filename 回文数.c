#include<stdio.h>
int main(void)
{
    int a;
    scanf_s("%d",&a);
    int m;/*�������ֵa��*/
    int sum=0;
    m=a;
    /*������Ĳ���*/
    while(m)
    {
        sum=sum*10+m%10;
        m=m/10;
    }
    if(sum==a)
    printf("�ǻ�����\n");
    else
    printf("���ǻ�����\n");
    return 0;
}

