#include<iostream>
using namespace std;

class record 
{
	string name,cname,branch;
	string prnno;
	int pkg;
	public:
	void getdata()
	{
		cout<<"Enter the name of the student :";
		cin>>name;
		cout<<"Enter the recruiter name :";
		cin>>cname;
		cout<<"Enter the branch of the student :";
		cin>>branch;
		cout<<"Enter the PRN of the student :";
		cin>>prnno;
		cout<<"Enter the package of the student :";
		cin>>pkg;
		cout<<"\n\n";
	}
	void display()
	{
		cout<<name<<"\t\t"<<cname<<"\t\t\t"<<branch<<"\t\t"<<prnno<<"\t\t"<<pkg<<endl;	
	}
};
int main()
{
	int i,n;
	cout<<"How many records do you want to insert ?";
	cin>>n;
	record *ptr=new record[n];
	for(i=0;i<n;i++)
	{
		cout<<"\n"<<"Enter the data of student :"<<i+1<<endl;
		ptr->getdata();
		ptr++;
	}
	for(i=0;i<n;i++)
	{
		ptr--;
	}
    cout<<"-------------------------Displaying the data---------------------"<<endl;
	cout<<"NAME"<<"\t\t"<<"COMPANY NAME"<<"\t\t"<<"BRANCH"<<"\t\t"<<"PRN NO "<<"\t\t\t"<<"PACKAGE"<<endl;
	for(i=0;i<n;i++)
	{
		ptr->display();
		ptr++;
	}
	cout<<"\n\n";
	int size = sizeof(*ptr);
	cout<<"Size of pointer is "<<ptr<<endl;
	/*delete []ptr;
	cout<<"Memory after deletion :";
	for(i=0;i<n;i++)
	{
		ptr->display();
	}*/
	return 0;
}	

		
		
