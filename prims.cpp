/* Assignment 24:-Minmum cost spanning tree using prims algorithm Lab:DAA */
#include<iostream.h>
#include<conio.h>
int g[100][100],tree[100],n;
class spanning
{
public:
void get()
{
cout<<"Enter the number of nodes :";
cin>>n;
cout<<"\n Enter the graph \n";
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
 cin>>g[i][j];
}
}
}
void dis()
{
cout<<"\n The Graph Is :\n";
for(int i=1;i<=n;i++)
{
cout<<"\n";
for(int j=1;j<=n;j++)
{
 cout<<g[i][j]<<" ";
}
}
}
void prims()
{
int total=0,v1,v2;
for(int l=1;l<=n;l++)
{
 tree[l]=0;
}
tree[1]=1;
cout<<"\n V1 V2 min_dist : ";
for(int k=2;k<=n;k++)
{
int min_dist=30000;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{
 if(g[i][j] && ((tree[i] && !tree[j])||(!tree[i]&&tree[j])))
 {
56
if(g[i][j]<min_dist)
{
min_dist=g[i][j];
v1=i;
v2=j;
}
 }
}
}
cout<<"\n"<<v1<<" "<<v2<<" "<<min_dist;
tree[v1]=1;
tree[v2]=1;
total=total+min_dist;
 }
 cout<<"\n Cost of spanning tree is : "<<total;
}
};
void main()
{
spanning s;
clrscr();
cout<<"\n\t. Program For Minimum cost spanning tree Usin Prims Algorithm .\t\n\n";
s.get();
s.dis();
s.prims();
getch();
}