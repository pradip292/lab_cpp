#include<iostream>
#include<string>
using namespace std;
void emp(int a , float b)
{

	try
	{
		if(a<18 && b>5)
		{
			throw a;
		}
		else if (a>=18 && b<5)
		{
			throw b;
		}
		else
		{
			cout<<"YOU ARE ELIGIBLE "<<endl;
		}
		
	}
	catch(int a)
	{
		cout<<"Sorry !You are below 18"<<endl;
	}
	catch(float b)
	{
		cout<<"SORRY !,YOU ARE NOT ELIGIBLE "<<endl;
	}
}

int main()
{
	int age;
	float exper;
	string name;
	cout<<"---------------Hiring Employee--------------"<<endl;
	cout<<"Enter your name :"<<endl;
	cin>>name;
	cout<<"Youe name is :"<<name<<endl;
	cout<<"Enter your age :"<<endl;
	cin>>age;
	cout<<"Enter your Experience IN YEARS :"<<endl;
	cin>>exper;
	emp(age,exper);
	return 0;
}