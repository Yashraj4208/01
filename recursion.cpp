/*Assignment 02 :- Program for finding Maximum using rules removal of recursion Lab:DAA*/
#include <iostream.h>
#include <conio.h>
#include<stdlib.h>
#include<time.h>
int a[200],n,k;
class maximum
{
private:
int i;
public:
void read();
int max(int);
void print();
};
void maximum::read()
{
 cout<<"...Program for finding Maximum using rules removal of recursion...";
 cout<<"\n\nEnter the number of element :- ";
 cin>>n;
 for(int p=1;p<=n;p++)
{
 if(p%9==0)
 cout<<endl;
 a[p]=rand();
 cout<<a[p]<<"\t";
}
}
int maximum::max(int i)
{
 int add;
 int top=0,st[400],j;
 l1:
 if(i<n)
{
 top=top+1;
 st[top]=i;
 top=top++;
 st[top]=2;
 i=i+1;
 goto l1;
 l2:
 j=st[top];
 top=top-1;
 if(a[i]>a[j])
 k=i;
 else
 k=j;
}
else
k=n;
if(top==0)
return k;
else
add=st[top];
top=top-1;
i=st[top];
top=top-1;
top=top+1;
st[top]=k;
if(add==2)
goto l2;
}
void maximum::print()
{
 cout<<"\n Max Position :- "<<k<<endl;
 cout<<"\n Max Element :- "<<a[k];
}
main()
{
 clrscr();
 maximum m;
 m.read();
 m.max(1);
 m.print();
 getch();
 return 0;
}