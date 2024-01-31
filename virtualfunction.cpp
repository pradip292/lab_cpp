#include<iostream>
#include<string>
using namespace std;
class data
{
	protected:
		int side,l,b;
	public :
	void getdata()
	{
		cout<<"Enter the length:";
		cin>>l;
		cout<<"Enter the breadth :";
		cin>>b;
	}
	virtual void area()
	{  
		cout<<"hello";
     	}
};

class reactangle: public data
{
        public:
        void area(){
	cout<<l*b<<endl;}
};

class triangle: public data
{
	public:
	void area(){
	cout<<0.5*l*b<<endl;}
};

int main()
{ 
	int ch;
	int m;
	reactangle r;
	triangle t;
	data *ptr;
	do
	{	
		cout<<"Enter choice :\n1.Reactangle \n2.Triangle "<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
			ptr=&r;
			ptr->getdata();
			ptr->area();
			break;
			
			case 2:
			ptr=&t;
			ptr->getdata();
			ptr->area();
			break;
			
		}
	
        cout<<"Do you want to continue ?:";
	cin>>m;
	}
	while(m==1);
        return 0;
}
