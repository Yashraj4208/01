/* Assignment 35 :- program for n Queen for in equivalent solution Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<math.h>
class nqueen
{
int n,x[200],cnt;
public :
nqueen(int);
void putdata();
int place(int);
void NQueen();
};
nqueen :: nqueen(int no)
{
n = no;
cnt = 0;
for(int i = 1;i <= n;i++)
x[i] = 0;
}
void nqueen :: putdata()
{
cout<<"\n";
for(int j = 1;j <= n;j++)
{
cout<<x[j]<<"\t";
}
}
void nqueen :: NQueen()
{
int k = 1;
x[k] = 0;
while(k > 0)
{
x[k] = x[k] + 1;
if( k == 1 && x[k] > (n/2) )
{
break;
}
while( x[k] <= n && place(k) == 0)
{
x[k] = x[k] + 1;
}
if(x[k] <= n)
{
if( k == n)
{
cnt++;
cout<<"\nSolution Number "<<cnt<<" : \n";
putdata();
}
else
{
k++;
x[k] = 0;
}
}
else
{
k--;
}
}
}
int nqueen :: place(int k)
{
for(int j = 1;j < k;j++)
{
if( x[j] == x[k] || abs(x[j] - x[k]) == abs(j - k) )
return(0);
}
return(1);
}
void main()
{
clrscr();
int no;
cout<<"\nEnter number of queen : ";
cin>>no;
if( no == 2 || no == 3)
{
cout<<"\nSolution is not possible.";
}
else
{
nqueen n(no);
n.NQueen();
}
getch();
}
/*