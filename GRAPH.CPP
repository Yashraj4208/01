/* Assignment 36 :- program for graph coloring Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<time.h>
int c[10][10],n,m;
class graph
{
int i,j,x[100];
public:
void get();
void color(int);
void show();
void nextvalue(int);
};
void graph::get()
{
cout<<"Enter the size of array\n";
cin>>n;
cout<<"Enter the color for graph\n";
cin>>m;
cout<<"Enter the adjancy matrix\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cin>>c[i][j];
}
}
for(i=1;i<=n;i++)
x[i]=0;
color(1);
}
void graph::nextvalue(int k)
{
do
{
x[k]=((x[k]+1)%(m+1));
if(x[k]==0)
return ;
for(j=1;j<=n;j++)
if((c[k][j]!=0)&&(x[k]==x[j]))
break;
if(j==n+1)
return;
}while(1);
}
void graph::color(int k)
{
do
{
nextvalue(k);
if(x[k]==0)
return;
if(k==n)
{
cout<<"\nColour of graph is :";
for(i=1;i<=n;i++)
cout<<x[i]<<"\t";
}
else
color(k+1);
}while(1);
}
void main()
{
clrscr();
graph g;
g.get();
getch();
}
