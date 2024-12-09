/* Assignment 33 :- Program for demonstrate Topological sort. Lab:DAA */
#include<iostream.h>
#include<conio.h>
class top
{
public :
int
cost[10][10],n1,n,indeg[10],q[10],visit[10],i,j;
int f,r,count;
top()
{
f=r=0;
}
void get ()
{
cout<<"\nEnter number of vertices :- ";
cin>>n;
cout<<"\nEnter matrix :- \n";
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
cin>>cost[i][j];
for(i=1;i<=n;i++)
{
indeg[i]=0;
visit[i]=0;
}
for(i=1;i<=n;i++)
for(j=1;j<=n;j++)
{ if(cost[i][j]==1)
indeg[j]=indeg[j]+1;
}
cout<<"\n Indegree :- \n";
cout<<"\n";
for(int k=1;k<=n;k++)
{
cout<<"Indgeree of NODE"<<k<<"Is"<<indeg[k]<<"\t"<<"\n";
}
}
void topo()
{
for(i=1;i<=n;i++)
{
if(indeg[i]==0 && visit[i]!=1)
{
if(f==0 && r==0)
{
f++;
r++;
}
else
r++;
q[r]=i;
visit[i]=1;
}
}
while(f<=r)
{
n1=q[f];
f++;
cout<<" "<<n1;
for(j=1;j<=n;j++)
{ if(cost[n1][j]==1 && visit[j]!=1) {
indeg[j]=indeg[j]-1;
if(indeg[j]==0)
{
r++;
q[r]=j;
visit[j]=1;
}
}
}
}
}
};
void main()
{
clrscr();
top p;
p.get();
p.topo();
getch();
}
