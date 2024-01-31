#include<iostream>
using namespace std;
struct nodestack
{
int data;
nodestack *next;
};

class stack
{
public :
nodestack *top;
void createStack();
void push(int);
bool isEmpty();
int pop();
int stackTop;
};


void stack::createStack()
{
top = NULL;
}

bool stack::isEmpty()
{
   return(top==NULL);
}

void stack::push(int newitem)
{
nodestack *newnode ;
newnode =new(nodestack);
if(newnode==NULL)
cout<<"Cannot Allocate Memory";
newnode ->data = newitem;
newnode ->next=top;
top=newnode;
};

int stack::pop()
{
nodestack *delnode;
if(isEmpty())
{
cout<<"Stack is Empty" ;
return 1;
}
else 
{
delnode=top;
top=delnode->next;
delete(delnode);
return 0;
}
}
int main()
{
int i,flag=0;
stack s;
char ch,string[20];
cout<<"enter the string";
cin>>string;

s.createStack();
for( i=0;string[i]!='\0';i++)
{
ch=string[i];
if (ch ='(' )
s.push(ch);
else
(ch==')' );
flag=s.pop();

if((s.isEmpty())and(flag == 0))
{
cout<<"It is a Well formedness of paranthesis"; 
}
else
{
cout<<"It is  not a Well formedness of paranthesis";
}
}
return 0;
}






