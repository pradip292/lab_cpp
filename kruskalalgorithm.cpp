#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int visited[10];

class graph
{
	int i,j,min,u,v,mincost,cost[10][10],edges,a,b,n;
	public:
		graph()
		{
			edges=1;
			mincost=0;
		}
		void kruskal(int cost[10][10],int n);
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
			cin>>cost[i][j];
			if(cost[i][j]==0)
				cost[i][j]=9999;
		}
	}
kruskal(cost,n);
}
void graph :: kruskal(int cost[10][10],int n)
{
	while(edges<n)
	{
		min=9999;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(cost[i][j]<min)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
				}
			}
		}
		while(visited[u])
			u=visited[u];
		while(visited[v])
			v=visited[v];
		if(u!=v)
		{
			edges++;
			cout<<"Edges:"<<a<<":->"<<b<<"\nWeight:"<<min<<"\n";
			mincost=mincost+min;
			visited[v]=u;
		}
		cost[a][b]=cost[b][a]=9999;
	}
	cout<<"\nMinimum cost= "<<mincost<<"\n";

}

int main(void)
{
		graph g;
		g.read();
		return 0;
}
			
