#include<iostream>
using namespace std;
class B;
class A
{
	int length;
	public:
	void getdata()
	{
	cout<<"Enter the length of the rectangle :"<<endl;
	cin>>length; 
	}
	friend void area(A p1 ,B p2);
	};
class B
{

	int breadth;
	
	public:
	void getdata2()
	{
	cout<<"Enter the breadth of the rectangle"<<endl;
	cin>>breadth; 
	}
	friend void area(A p1 ,B p2);
};

void area(A p1 ,B p2)
{
	cout<<"Area of the rectangle is :"<<(p1.length*p2.breadth)<<endl;
}

int main()
{
	A a;
	B b;
	a.getdata();
	b.getdata2();
	area(a,b);
	return 0;
}



