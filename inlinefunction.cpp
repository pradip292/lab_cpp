#include<iostream>
using namespace std;

inline float area(int r)
{
	return(3.14*r*r);
}

int main()
{
	int r;
	cout<<"Enter the radius of the circle :"<<endl;
	cin>>r;
	//int r=2;;
	cout<<"The area of circle is : "<<area(r);
	return 0;
}
