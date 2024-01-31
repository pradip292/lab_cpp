#include<iostream>
#include<string.h>

using namespace std;

class employeedata
{
	protected:
	string name,address;
	int id; 
	public:
		void input1()
		{
			cout<<"Enter the name of employee :";
			getline(cin,name);
			cout<<"Enter id of the employee :";
			cin>>id;
			cout<<"Enter the address of employee:";
			cin>>address;
		}
		void display1()
		{
			cout<<"Name of employee is :"<<name<<endl;
			cout<<"Id of employee is :"<<id<<endl;
			cout<<"Address of employee is :"<<address<<endl;
		}
};

class products
{
	protected:
	string pname;
	float price;
	int pid;
	public:
		void input2()
		{
			cout<<"Enter the name of Product :";
			cin>>pname;
			cout<<"Enter the price of the product :";
			cin>>price;
			cout<<"Enter the product id :";
			cin>>pid;
			
		}
		void display2()
		{
			cout<<"Name of product is :"<<pname<<endl;
			cout<<"Price of the product is :"<<price<<endl;
			cout<<"Id of product is :"<<pid<<endl;
		}
};

class supplier
{
	protected:
	string sname,pname2;
	int cn;
	public:
		void input3()
		{
			cout<<"Enter the supplier name :";
			cin>>sname;
			cout<<"Enter the contact number of the supplier :";
			cin>>cn;
			cout<<"Enter the supplied product name :";
			cin>>pname2;
		}
		void display3()
		{
			cout<<"Supplier name is :"<<sname<<endl;
			cout<<"Contact number of suuplier is "<<cn<<endl;
			cout<<"Supplied product name is :"<<pname2<<endl;
		}
};
class company: public employeedata,public products,public supplier
{
	
	protected:
	string cname,add2;
	int tn;
	public:
		void input4()
		{
			cout<<"Enter the name of the company:";
		        cin>>cname;
			cout<<"Enter the address of the company :";
			cin>>add2;
			cout<<"Enter the total number of the employee in the company :";
			cin>>tn;
		}
		void display4()
		{
			cout<<"Name of the company is :"<<cname<<endl;
			cout<<"Address of the company is :"<<add2<<endl;
			cout<<"Total number of employee is the company is :"<<tn<<endl;
		}
};

int main()
{
	company a;
	a.input1();
	a.input2();
	a.input3();
	a.input4();
	a.display1();
	a.display2();
	a.display3();
	a.display4();
	return 0;
}	


















			
