/* Assignment 25 :- Program for demonstrate Kruskal Algorithm. Lab:DAA */
#include<iostream.h>
#include<conio.h>
#define INFINITY 999
typedef struct Graph
{
int v1;
int v2;
int cost;
}GR;
GR G[20];
int tot_edges,tot_nodes;
void create();
void spanning_tree();
int Minimum(int);
void main()
{
clrscr();
cout<<"\n\t Graph Creation by adjacency matrix ";
create();
spanning_tree();
getch();
}
void create()
{
int k;
cout<<"\n Enter Total number of nodes: ";
cin>>tot_nodes;
cout<<"\n Enter Total number of edges: ";
cin>>tot_edges;
for(k=1;k<=tot_edges;k++)
{
cout<<"\n Enter Edge in (V1 V2)form ";
cin>>G[k].v1>>G[k].v2;
cout<<"\n Enter Corresponding Cost ";
cin>>G[k].cost;
}
}
void spanning_tree()
{
int count,k,v1,v2,i,j,tree[10][10],pos,parent[10];
int sum;
int Find(int v2,int parent[]);
void Union(int i,int j,int parent[]);
count=0;
k=1;
sum=0;
for(i=1;i<=tot_nodes;i++)
parent[i]=i;
while(count!=tot_nodes-1)
{
pos=Minimum(tot_edges);//finding the minimum cost edge
if(pos==-1)//Perhaps no node in the graph
break;
v1=G[pos].v1;
v2=G[pos].v2;
i=Find(v1,parent);
j=Find(v2,parent);
if(i!=j)
{
tree[k][1]=v1;//storing the minimum edge in array tree[]
tree[k][2]=v2;
k++;
count++;
sum+=G[pos].cost;//accumulating the total cost of MST
Union(i,j,parent);
}
G[pos].cost=INFINITY;
}
if(count==tot_nodes-1)
{
cout<<"\n Spanning tree is...";
cout<<"\n--------------------------\n";
for(i=1;i<=tot_nodes-1;i++)

{
cout<<tree[i][1];
cout<<" - ";
cout<<tree[i][2];
cout<<"]";
}
cout<<"\n--------------------------";
cout<<"\nCost of Spanning Tree is = "<<sum;
}
else
{
cout<<"There is no Spanning Tree";
}
}
int Minimum(int n)
{
int i,small,pos;
small=INFINITY;
pos=-1;
for(i=1;i<=n;i++)
{
if(G[i].cost<small)
{
small=G[i].cost;
pos=i;
}
}
return pos;
}
int Find(int v2,int parent[])
{
while(parent[v2]!=v2)
{
v2=parent[v2];
}
return v2;
}
void Union(int i,int j,int parent[])
{
if(i<j)
parent[j]=i;
else
parent[i]=j;
}