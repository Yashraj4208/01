/* Assignment 08:-Program for MAX heap using Heapify/Adjust Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int a[1000],n;
class heap
{
int i,j,item;
public:
void get();
void show();
void adjust(int [],int i,int j);
void heapify(int [],int);
};
void heap::get()
{
cout<<"Program for Max Heap using Heapify/Adjust..." ;
cout<<"\n\nEnter the size of array :";
cin>>n;
for(i=1;i<=n;i++)
a[i]=random(1000);
}
void heap::show()
{
cout<<"\n The element is:= \n";
for(i=1;i<=n;i++)
cout<<a[i]<<"\t";
}
void heap::adjust(int a[],int i,int n)
{
j=2*i;
item=a[i];
while(j<=n)
{
if((j<n) && (a[j]<a[j+1]))
j++;
if(item>=a[j])
break;
a[j/2]=a[j];
j=2*j;
}
a[j/2]=item;
}
void heap::heapify(int a[],int n)
{
for(i=n/2;i>=1;i--)
adjust(a,i,n);
}
void main()
{
clrscr();
clock_t e,s;
heap h;
h.get();
h.show();
s=clock();
h.heapify(a,n);
e=clock();
h.show();
cout<<"\n The Time complexityis => "<<(e-s)/CLK_TCK;
getch();
}
