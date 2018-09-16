#include<stdio.h>
struct date_type
{
	int year;
	int month;
	int day;
}date;
void main()
{
	int days=0,i;
	int mon_day[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&date.year,&date.month,&date.day);
	for(i=1;i<date.month;i++)
		days=days+mon_day[i];
	days=days+date.day;
	if((date.year%4==0&&date.year%100==0||date.year%400==0)&&date.month>=3)
		days=days+1;
	printf("%d",days);
}