#include<iostream>
using namespace std;

int main()
{
	int i,j,ver=0;
	cout<<"Enter the number of vertices :"<<endl;
        cin>>ver;
	int a[ver][ver];
	cout<<"Enter the elements in the matrix :"<<endl;
	for(i=0;i<ver;i++)
	{
		for(j=0;j<ver;j++)
		{
                        cout<<"Enter the element :"<<"Element : "<<i+1<<j+1<<":";
			cin>>a[i][j];
		}
			 	
	}
        cout<<"Your Matrix Is ::"<<endl;
        for(i=0;i<ver;i++)
	{
		for(j=0;j<ver;j++)
		{
			
			cout<<"\t"<<a[i][j];
			
		}
		cout<<"\n";	 	
	}
        return 0;
}
