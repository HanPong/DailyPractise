#include<stdio.h>
int main(void)
{
    int a;
    scanf_s("%d",&a);
    int m;/*（保存初值a）*/
    int sum=0;
    m=a;
    /*运算核心部分*/
    while(m)
    {
        sum=sum*10+m%10;
        m=m/10;
    }
    if(sum==a)
    printf("是回文数\n");
    else
    printf("不是回文数\n");
    return 0;
}

