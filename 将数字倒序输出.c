#include<stdio.h>
void main()
{
	int number,digit;
	printf("please input data:\n");
	scanf("%d",&number);
	while(number!=0)
	{
		digit=number%10;/*先将数字除10取余*/
		printf("%d",digit);
		number=number/10;/*再将数字缩小10倍*/
	}
}
