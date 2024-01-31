#include<iostream>
using namespace std;
class B;
class C;
class A
{
	int number1;

	public:
	void getdata()
	{
	cout<<"Enter the 1st number:"<<endl;
	cin>>number1; 
	}
	friend void avg(A p1 ,B p2,C p3);
	};
class B
{
	int number2;
	public:
	void getdata2()
	{
	cout<<"Enter the 2nd number:"<<endl;
	cin>>number2; 
	}
	friend void avg(A p1 ,B p2,C p3);
};

class C
{
	int number3;
	public:
	void getdata3()
	{
	cout<<"Enter the 3rd number:"<<endl;
	cin>>number3; 
	}
	friend void avg(A p1,B p2,C p3);
};

void avg(A p ,B p1,C p3)
{
	cout<<"Avarage of the three numbers is :"<<(p.number1+p1.number2+p3.number3)/3<<endl;
}
int main()
{
	A a;
	B b;
	C c;
	a.getdata();
	b.getdata2();
	c.getdata3();
	avg(a,b,c);
	return 0;
}



