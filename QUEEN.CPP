/* Assignment 34 :- program for n Queen for all solution
 Lab:DAA
*/
#include<iostream.h>
#include<conio.h>
#include<math.h>
int x[100],n;
class nqueen
{
int z;
public:
void get();
void show();
void queen(int,int);
int place(int,int);
};
void nqueen::get()
{
cout<<"Enter the no of queens :- \n";
cin>>n;
for(int i=1;i<=n;i++)
x[i]=0;
z=0;
queen(1,n);
}
void nqueen::queen(int k,int n)
{
for(int i=1;i<=n;i++)
{
if(place(k,i))
{
x[k]=i;
if(k==n)
{
cout<<endl;z++; cout<<z<<":->";
for( i=1;i<=n;i++)
cout<<x[i]<<"\t";
}
else
queen(k+1,n);
}
}
}
int nqueen::place(int k,int i)
{
for(int j=1;j<=k-1;j++)
{
if((x[j]==i) || abs(x[j]-i)==(abs(j-k)))
return 0;
}
return 1;
}
void main()
{
clrscr();
nqueen n;
n.get();
getch();
}
