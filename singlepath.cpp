/* Assignment 26 :- Program for single source shortest path. Lab:DAA */
#include<iostream.h>
#include<conio.h>
int n;
class single
{
int v,cost[10][10],i,j,s[10];
float dist[10];
public:
void get();
void sisource();
void display();
};
void single::get()
{
cout<<"\nEnter the no. of vertices :- \n";
cin>>n;
cout<<"\nEnter the adjency matrix :- \n";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{
cin>>cost [i][j];
if(cost [i][j]==-1)
cost [i][j]=9999;
}
}
void single::sisource()
{
v=1;
for(i=1;i<=n;i++)
{
s[i]=0;
dist[i] = cost [v][i];
}
s[v]=1;
dist[v]=0.0;
int minu,u;
for(int num=2;num<=n;num++)
{
for(i=1;i<=n;i++)
if(s[i]==0)
minu=dist[i];
for(i=1;i<=n;i++)
{
if(s[i]==0 && dist[i]<minu)
{
minu=dist[i];
u=i;
}
}
s[u]=1;
62
for(i=1;i<=n;i++)
{
if(cost [u][i]>0 && cost [u][i] < 9999 && s[i]==0) {
if(dist[i] > (dist [u] + cost[u][i]))
{
dist [i]= dist [u] + cost [u][i];
}
}
}
}
}
void single::display()
{
cout<<endl;
for(i=1;i<=n;i++)
{
cout<<"distance from 1------------>"<<i<<"\t";
cout<<dist[i]<<" ";
cout<<endl;
}
}
void main()
{
clrscr();
single g;
g.get();
g.sisource();
g.display();
getch();
}