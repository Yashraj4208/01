/*Assignment 04:- Program For Binomial Co-efficient .. Lab:DAA */
#include<iostream.h>
#include<conio.h>
int binomial(int a,int b)
{
if((a==b) || (b==0))
 return 1;
else
 return(binomial(a-1,b-1)+binomial(a-1,b));
}
void main()
{
clrscr();
int n;
cout<<"Program For Binomial Co-efficient ..\n\n";
cout<<"Enter level :-";
cin>>n;
for(int i=0;i<=n;i++)
cout<<binomial(n,i)<<"\t";
getch();
}