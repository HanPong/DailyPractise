//功能2：时间函数（本地时间） 时间：2018.2.14 19：55
#include <time.h>
#include<stdio.h>
char shijian();
int main()
{
	printf("****************************\n");
	printf("*********时间函数2**********\n");
	printf("*********北京时间***********\n");
	shijian();
	printf("****************************\n");
	

}
char shijian()
{     
	char *wday[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};      
	time_t timep;      
	struct tm *p;      
	time(&timep);       
	p=localtime(&timep); /*??????*/       
	printf("%d年%d月%d日 ", (1900+p->tm_year),( 1+p->tm_mon), p->tm_mday);      
	printf("%s %d:%d:%d\n", wday[p->tm_wday],p->tm_hour, p->tm_min, p->tm_sec);  
} 