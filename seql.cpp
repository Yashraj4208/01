/* Assignment 28 :- Program for longest common subsequence. Lab:DAA */
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void print_lcs(char b[][20],char x[],int i,int j)
{
if(i==0 || j==0)
return;
if(b[i][j]=='c')
{
print_lcs(b,x,i-1,j-1);
cout<<x[i-1]<<"\t";
}
else
if(b[i][j]=='u')
print_lcs(b,x,i-1,j);
else
print_lcs(b,x,i,j-1);
}
void lcs_length(char x[],char y[])
{
int m,n,i,j,c[20][20];
char b[20][20];
m=strlen(x);
n=strlen(y);
for(i=0;i<=m;i++)
c[i][0]=0;
for(i=0;i<=n;i++)
c[0][i]=0;
for(i=1;i<=m;i++)
for(j=1;j<=n;j++)
{
if(x[i-1]==y[j-1])
{
c[i][j]=c[i-1][j-1]+1;
b[i][j]='c'; //c stands for left up cross
}
else
if(c[i-1][j]>=c[i][j-1])
{
c[i][j]=c[i-1][j];
b[i][j]='u'; //u stands for upright or above
}
else
{
c[i][j]=c[i][j-1];
b[i][j]='l'; //l stands for left
}
}
print_lcs(b,x,m,n);
}
void lcs()
{
int i,j;
char x[20],y[20];
cout<<"1st sequence :- ";
gets(x);
cout<<"2nd sequence :- ";
gets(y);
cout<<"\nLCS are :- ";
lcs_length(x,y);
cout<< "\n";
// lcs_length(y,x);
}
void main()
{
clrscr();
char ch;
do
{
lcs();
cout<<"\nContinue(y/n) :- ";
cin>>ch;
}
while(ch=='y'||ch=='Y');
getch();
}