/* Assignment 27 :- Implementation of 0/1 knapsack. Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int table[10][10];
int w[100],v[100];
int W,n;
class knap
{
public:
knap()
{
cout<<"\n\t\t 0/1 Knapsack Problem using Dynamic Programming"; /*initialization of table*/
for(int i=0;i<=n;i++)
{
for(int j=0;j<=W;j++)
{
table[i][j]=0;
}
}
}
void get()
{
cout<<"\n Enter how many products you want to declare :- \n"; cin>>n;
cout<<"\n Enter Knapsack size :\n";
cin>>W;
cout<<"\n Enter "<<n<<" products weight and profit :- \n"; for(int i=1;i<=n;i++)
{ cout<<"\n Enter Product "<<i<<" weight :- \t";
cin>>w[i];
cout<<"\n Enter Product "<<i<<" profit :- \t";
cin>>v[i];
}
}
int max(int a,int b)
{
if(a>b)
return a;
else
return b;
}
void find_item(int i,int k,int w[5])
{
cout<<"\nFor the Knapsack...\n";
while(i>0 && k>0)
{
if(table[i][k]!=table[i-1][k])
{
cout<<"\nItem "<<i<<" is selected\n";
k=k-w[i];
i=i-1;
}
else
i=i-1;
}
}
void DKP(int n,int W,int w[5],int v[5])
{
int i,j;
int val1,val2;
for(i=0;i<=n;i++)
{
for(j=0;j<=W;j++)
{
table[i][0]=0;
table[0][j]=0;
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=W;j++)
{
if(w[i]<=j)
{
val1=table[i-1][j];
val2=v[i]+table[i-1][j-w[i]];
table[i][j]=max(val1,val2);
}
else
table[i][j]=table[i-1][j];
}
}
cout<<"\n Table constructed using dynamic programming is...\n";
for(i=0;i<=n;i++)
{
for(j=0;j<=W;j++)
cout<<table[i][j]<<"\t";
cout<<"\n";
}
find_item(n,W,w);
}
};
void main()
{
knap k;
clrscr();
k.get();
k.DKP(n,W,w,v);
getch();
}