/*Assignment 01 :- write a program to implement GCD and LCM Lab:DAA */
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b;
cout<<"Enter Two Numbers For Finding GCD :\n";
cin>>a>>b;
int p=a*b;
while(a!=b)
{
if(a>b)
 a=a-b;
else
 b=b-a;
}
cout<<"GCD = "<<a;
cout<<"\nLCM = "<<p/a;
getch();
}