#include<iostream>
using namespace std;
class complex
{
	float imag,real;

	public:
	complex()
	{
		real=0;
		imag=0;
	}
	void getdata()
	{
		cout<<"Enter the real part :"<<endl;
		cin>>real;
		cout<<"Enter the imaganary part :"<<endl;
		cin>>imag;
	}
	void display()
	{
                
		cout<<real<<"+"<<imag<<"i"<<endl;
		
	}
	complex operator -(complex c)
	{
		complex c3;
		c3.real=real-c.real;
  		c3.imag=imag-c.imag;
		return c3;
	}
        friend complex operator +(complex a, complex b)
	{
		complex t;
		t.real=a.real+b.real;
		t.imag=a.imag+b.imag;
	        return t;
	}
};

int main()
{
	complex c1,c2,c3;
	c1.getdata();
	c2.getdata();
        cout<<"Two complex numbers are :"<<endl;
	c1.display();
	c2.display();

	cout<<"\nAddition is :"<<endl;
	c3=c1+c2;
        c3.display();
	cout<<"\nSubstraction is :"<<endl;
	c3=c1-c2;
	c3.display();
return 0;
}

	
