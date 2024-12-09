/*Assignment 05 :- Implement program for Binomial Coefficient by Using rules of removal of recursion
Lab:DAA */
#include<iostream.h>
#include<conio.h>
int b=0;
class bin
{
int n,m,top;
public:
void read();
int binomial(int n,int m);
int topcheck();
};
void bin::read()
{
cout<<"\nprogram for Binomial Coefficent by Using rules of removal of recursion\n\n";
cout<<"\n Enter the Value n:-";
cin>>n;
cout<<"\n Enter the Value m :-";
cin>>m;
binomial(n,m);
cout<<endl<<"Binomial Coefficint Is :-"<<b;
}
int bin::topcheck()
{
if(top==0)
return(1);
return(0);
}
int bin::binomial(int n,int m)
{
int st[100];
top=0;
L1:
 if((n==m)||(m==0))
 {
 b=b+1;
 if(topcheck())
 {
 return(b);
 }
 else
 goto L2;
 }
 else
 {
 top=top+1;

 st[top]=n;
 top=top+1;
 st[top]=m;
n=n-1;
 m=m-1;
 goto L1;
 }
 L2:
 m=st[top];
 top--;
 n=st[top];
 top--;
 n--;
 goto L1;
}
void main()
{
 bin b1;
 clrscr();
 b1.read();
 getch();
}