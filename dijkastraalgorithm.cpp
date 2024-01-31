#include<iostream>
using namespace std;
int visit[10];
class graph
{
	private:
	int i,j,n,l,cost[10],mat[10][10],dest[10],path[20];
	int edges,min,ncost,x,curdest,s,d,final,k,m;
	public:
		graph()
		{
			edges=1;
			ncost=0;
		}
		void dij(int mat[10][10],int n);
		void display();
		void read();
};

void graph::read()
{
	cout<<"Enter number of vertices :";
	cin>>n;
	cout<<"Enter weight of edges in the forms of Adjecency Matrix :"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>mat[i][j];
			if(mat[i][j]==0)
				mat[i][j]=9999;
		}
	}
        dij(mat,n);
}
void graph :: dij(int mat[10][10],int n)
{
	cout<<"\nEnter the source code 😀 :";
	cin>>s;
	cout<<"\nEnter the destination node 😀 :";
	cin>>d;
	for(i=1;i<=n;i++)
	{
		cost[i]=9999;
	}
	cost[s]=0;
	x=s;
	visit[x]=1;
	while(x!=d)
	{
		curdest=cost[x];
		min=9999;
		for(i=1;i<=n;i++)
		{
			if(visit[i]==0)
			{
				ncost=curdest+mat[x][i];
				if(ncost<cost[i])
				{
					cost[i]=ncost;
					dest[i]=x;
				}
				if(cost[i]<min)
				{
					min=cost[i];
					k=i;
				}
			}
		}
		x=k;
		visit[x]=1;
	}
	display();

}

void graph:: display()
{
	l=d;
	
	path[final]=d;
	final++;
	while(dest[l]!=s)
	{
		m=dest[l];
		l=m;
		path[final]=l;
		final++;
	}
	path[final]=s;
	cout<<"\nShortest Path is :";
	for(l=final;l>=1;l--)
	{
		cout<<"\n"<<path[l]<<"-->"<<path[l-1]<<" : "<<mat[path[l]][path[l-1]];}
		cout<<"\nTotal cost is :"<<cost[d];
	
}

int main()
{
		graph g;
		g.read();
		return 0;
}
			
