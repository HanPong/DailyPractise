#include<stdio.h>
void main()
{
	int number,digit;
	printf("please input data:\n");
	scanf("%d",&number);
	while(number!=0)
	{
		digit=number%10;/*�Ƚ����ֳ�10ȡ��*/
		printf("%d",digit);
		number=number/10;/*�ٽ�������С10��*/
	}
}
