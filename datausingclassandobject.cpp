//storing data of student using class and object ....
#include<iostream>
using namespace std;
class petdata
{
    private:
    int pet_id;
    string petname;
    float petprice;

    public:
    petdata() //default constructor
    {
        pet_id=1;
        petname ="Dog";
        petprice=100;
    }
    void getdata()
    {
        cout<<"Enter the Id of pet::";
        cin>>pet_id;
        cout<<"Enter the pet name::";
        cin>>petname;
        cout<<"Enter the Price of pet::";
        cin>>petprice;
    }
    void display()
    {
        cout<<"\n\t-------------------------------------------------------------------";
        cout<<"\n\t"<<pet_id<<"\t\t\t"<<petname<<"\t\t\t"<<petprice<<"\t";
    }
};
int main()
{
    int i,n;
    petdata a[10];
    cout<<"Enter the Number of pets::";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\n"<<"Enter the data of "<<i+1<<endl;
        a[i].getdata();
    }
    cout<<"\n\t"<<"PET ID."<<"\t\t"<<"PET NAME\t\t"<<"PET PRICE\t\n";
    for(i=0;i<n;i++)
    {
        a[i].display();
    }
    return 0;
}
