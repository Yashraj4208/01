/* Assignment 07 :- Write a program for Min Heap Insert.. Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
class heap
{
private:
int a[1000],n;
public:
void getdata();
void insert();
void disp();
};
void heap::getdata()
{
 cout<<"\n...Program for Min Heap Insert...\n\n";
 cout<<"Enter the Size := " ;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 a[i]=random(20000);
 }
}
void heap::insert()
{
 for(int j=1;j<=n;j++)
 {
 int i=j;
 int item=a[i];
 while((i>1) && (a[i/2] > item))
 {
a[i]=a[i/2];
i=i/2;
 }
 a[i]=item;
 }
}
void heap::disp()
{
for(int i=1;i<=n;i++)
{
if(i%8==0)
cout<<"\n";
cout<<a[i]<<"\t";
}
}
void main()
{
clrscr();
clock_t e,s;
heap h;
h.getdata();
cout<<"\n\n Befor Insert :: ";
h.disp();
s=clock();
h.insert();
e=clock();
cout<<"\n\n After Insert ::\n";
h.disp();
cout<<"\n\nThe Time Complexity is ::"<<((e-s)/CLK_TCK);
getch();
}
