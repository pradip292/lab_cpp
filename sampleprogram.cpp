#include<iostream>
using namespace std;
class name 
{
  private:
     int a,b,c;
  public :
     void getdata()
     {
       cout<<"enter the 1st and 2nd numbers :";
       cin>>a>>b;
     }
     void showdata()
     {  
        c=a-b;
        cout<< "the result is :" <<c;
     }
};




int main()
{ 
  name s1;
  s1.getdata();
  s1.showdata();
  return 0;
}
