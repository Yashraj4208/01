/* Assignment 03:- Program for Searching An element Using Rules Of Removal Of Recursion.
Lab:DAA*/
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
class array
{
 private:
 int *a,size,*stack,top,p,item;
public:
array()
{
cout<<"\n Enter the number of elements :- ";
cin>>size;
a=new int[size];
stack=new int[size*2];
top=-1;
}
void getdata();
void display();
int search(int);
};
void array::getdata()
{
for(int i=0;i<size;i++)
{
 if(i%8==0)
 cout<<"\n";
 a[i]=random(100);
 cout<<a[i]<<" ";
}
cout<<"\n Enter the initial Position :-";
cin>>p;
cout<<"\n Enter the item to be search :-";
cin>>item;
}
int array::search(int b)
{
int pos,addr,i;
while(b<size)
{
top++;
stack[top]=b;
top++;
stack[top]=2;
b++;
}
pos=-1;
do
{
5
addr=stack[top];
top--;
i=stack[top];
top--;
if(addr==2 && a[i]==item)
{
if(pos== -1)
cout<<"\n Element is found at Position :";
else
cout<<" , ";
pos=i+1;
cout<<pos;
}
}while(top>0);
return pos;
}
void array::display()
{
if(search(p-1) == -1)
cout<<"\n Item Is not Found In the array...";
}
void main()
{
 clrscr();
 clock_t e,s;
 array obj;
 obj.getdata();
 s=clock();
 obj.display();
 e=clock();
 cout<<"\n The Time Complexity is :-"<<((e-s)/CLK_TCK);
 getch();
}
