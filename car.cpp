#include<iostream>
using namespace std;
#include"car.h"
int main()
{
	Car *p;
	p=new Car(5);
	p->display();
	p->Setnumber(20);
	p->display();
	delete p;
	return 0;
}
Car::Car(int a)
{
	cout<<"constructor......"<<endl;
	x=a;
}
Car::~Car()
{
	cout<<"destructor......"<<endl;
}
void Car::display()
{
	
	cout<<"��������Ŀ�ǣ�"<<x<<endl;
}
void Car::Setnumber(int b)
{
	x=b;
}