/* Assignment 29 :- Implentation of matrix chain multiplication. Lab:DAA */
#include<iostream.h>
#include<conio.h>
#define INF 30000
int p[100],m[100][100],s[100][100],k,n,j,q,i,l;
class matrix_chain
{
public:
void get()
{
cout<<"\n Enter total matrix count :\n";
cin>>n;
cout<<"\n Enter Matrix Orders :\n";
for(int i=0;i<=n;i++)
{
cout<<"\nP["<<i<<"]=";
cin>>p[i];
}
matrix_chain1(p,n);
}
void matrix_chain1(int p[],int n)
{
for (i=1;i<=n;i++)
m[i][i]=0;
for (l=2;l<=n;l++)
{
for (i=1;i<=n-l+1;i++)
{
j=i+l-1;
m[i][j]=INF;
for (k=i;k<=j-1;k++)
{
q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
if(q<m[i][j])
{
m[i][j]=q;
s[i][j]=k;
}
}
}
}
cout<<"\n Total Optimal Scalar Multiplication needed are :- "<<m[1][n];
cout<<"\n Array M[i][j] is \n";
for(i=1;i<=n;i++)
{
cout<<"\n";
for(j=1;j<=n;j++)
cout<<m[i][j]<<"\t";
}
cout<<"\n Array S[i][j] is :- \n";
for(i=1;i<=n;i++)
{
cout<<"\n";
for(j=1;j<=n;j++)
cout<<s[i][j]<<"\t";
}
}
void print_optimal(int i,int j)
{
if (i==j)
cout<<" A "<<i;
else
{
cout<<" ( ";
print_optimal(i,s[i][j]);
print_optimal(s[i][j]+1,j);
cout<<" ) ";
}
}
};
void main()
{
clrscr();
matrix_chain m1;
m1.get();
m1.print_optimal(1,n);
getch();
}
