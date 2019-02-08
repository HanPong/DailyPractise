//功能：房间费用程序
#include<stdio.h>
#include<hotel.h>

int main(void) 
{
	int nights;
	double hotel_rate;
	int code;

	while((code=menu())!=QUIT)
	{
		switch(code)
		{
		case 1:hotel_rate=HOTEL1;
			break;
		case 2:hotel_rate=HOTEL2;
			break;
		case 3:hotel_rate=HOTEL3;
			break;
		case 4:hotel_rate=HOTEL4;
			break;
		default:hotel_rate=0.0;
			printf("Oops!\n");
			break;
		}
		nights=getnights();
		showprice(hotel_rate,nights);//价格函数


	}
	printf("Thank you and goodbye.\n");
	 
	return 0;
}

//hotel.c函数支持模块
#include<stdio.h>
#include"hotel.h"
int menu(void)
{
	int code,status;

	printf("\n%s%s\n",STARS,STARS);
	printf("Enter the number of the desired hotel:\n");
	printf("1.Fairfield Arms     2.Hotel Olympic\n");
	printf("3.Chertworthy Plaza  4.The Stockton\n");
	printf("5.quit\n");

	printf("%s%s\n",STARS,STARS);
	while((status=scanf("%d",&code))!=1||(code<1||code>5))//???
	{
		if(status!=1)
			scanf("%*s");//???处理非整数输入
		printf("Enter an integer from 1to 5,please.\n");//????

	}
	return code;

}
int getnight(void)
{
	int nights;
	printf("How many nights are needed?");
	while(scanf("%d",&nights)!=1)
	{
		scanf("%*s");
		printf("Please enter an integer,such as 2.\n");

	}
	return nights;
}
void showprice(double rate,int nights)
{
	int n;
	double total=0.0;
	double factor=1.0;


    for(n=1;n<=nights;n++,factor*=DISCOUNT)//此种用法比较特殊
		total+=rate*factor;
	printf("The total cost will be $%0.2f.\n",total);
}

