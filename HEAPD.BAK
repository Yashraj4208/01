/*Assignment 11:- Write a program for HeapSort Descending Using Insert/Delete Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
class heap
{
int item,i,b[1000];
private:
int a[1000],n;
public:
void getdata();
int delheap();
void insert(int);
void adjust(int[],int,int);
void heapsort();
void disp();
void disp1();
};
void heap::getdata()
{
cout<<"Program for HeapSort for Ascending using Insert/Delete...\n";
cout<<"\nEnter Size :=";
cin>>n;
for(int i=1;i<=n;i++)
{
 a[i]=random(20000);
}
}
void heap::insert(int i)
{
int item=a[i];
while((i>1) && (a[i/2]<item))
{
a[i]=a[i/2];
i=i/2;
}
a[i]=item;
}
void heap::adjust(int a[],int i,int n)
{
int j=2*i;
item=a[i];
while(j<=n)
{
 if((j<n) && (a[j]<a[j+1]))
 j=j+1;
 if(item>=a[j])
 break;
 a[j/2]=a[j];
 j=2*j;
}
a[j/2]=item;
}
int heap::delheap()
{
if(n==0)
{
 cout<<"heap is empty :";
}
int x=a[1];
a[1]=a[i];
adjust(a,1,i-1);
return x;
}
void heap::heapsort()
{
for(i=1;i<=n;i++)
insert(i);
disp();
for(i=n;i>=1;i--)
b[i]=delheap();
}
void heap::disp()
{
for(i=1;i<=n;i++)
{
 if(i%8==0)
 cout<<"\n";
 cout<<a[i]<<"\t";
}
}
void heap::disp1()
{
for(i=1;i<=n;i++)
{
 if(i%8==0)
 cout<<"\n";
 cout<<b[i]<<"\t";
}
}
void main()
{
clrscr();
clock_t e,s;
heap h;
h.getdata();
cout<<"\n\n Before Sort :\n";
s=clock();
h.heapsort();
e=clock();
cout<<"\n\n After Sort :\n";
h.disp1();
cout<<"\n\n Time Complexity ::"<<((e-s)/(CLK_TCK));
getch();
}