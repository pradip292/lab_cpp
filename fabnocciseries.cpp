#include<iostream>
using namespace std;

int main()
{
	int i,n, a=0 ,b=1, ans=0;
	cout<<"Enter the number of terms (should be greater than 2 !) :"<<endl;
        cin>>n;
	cout<<"0"<<","<<"1"<<",";
	for(i=2;i<n;i++)
        {
		ans=a+b;
		cout<<ans;
		
                cout<<",";
		a=b;
		b=ans;
	}
	return 0;
}
		
