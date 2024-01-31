#include<iostream>
using namespace std;

class oddeven
{

	int r,len,bre;
    public:
	void area(int r)
	{
        cout<<"Enter the radius of circle :";
        cin>>r;
        float area= 3.14*r*r;
        cout<<"The area of circle is :"<<area;
	}
    void area(int len , int bre)
    {
		cout<<"Enter the length:"<<endl;
        cin>>len;
		cout<<"Enter the breadth:"<<endl;
        cin>>bre;
		float area=len*bre;
		cout<<"The area of rectangle is :"<<area;
	}
};

int main()
{
	oddeven p;
	p.area(4,5);
	return 0;
}

       
	
