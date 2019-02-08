//功能：时间函数 时间：2018.2.14
//注释：时间函数是自定义的char函数，然后在主函数里调用
#include<time.h>
#include<stdio.h>
char shijian();//自定义的时间函数，char形式
int main()
{
	printf("****************************\n");
	printf("*********时间函数1**********\n");
	printf("******格林尼治标准时间******\n");
	shijian();
	printf("****************************\n");
	
}


char shijian()//自定义的时间函数
{
	time_t timep;

	time(&timep);

	printf("%s",asctime(gmtime(&timep)));
}
