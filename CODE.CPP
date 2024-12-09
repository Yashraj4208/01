/*Assignment 37 :- Program for code 1 using postfix expression Lab:DAA */
#include<iostream.h>
#include<conio.h>
class node
{
public:
node *left,*right;
char data[30];
};
class code
{
private:
char expr[30];
node *n,*root;
int f;
public:
void get();
int Isoperand(char);
node *create_tree();
void print(char *);
void mycode(node *,int);
};
void code::get()
{
cout<<"\nEnter The Postfix Expresion:";
cin>>expr;
root = create_tree();
mycode(root,0);
}
int code::Isoperand(char c)
{
if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
return 1;
else
return 0;
}
void code::print(char *t)
{
switch(t[0])
{
case '+':cout<<"ADD ";break;
case '-':cout<<"SUB ";break;
case '*':cout<<"MPY ";break;
case '/':cout<<"DIV ";break;
default:cout<<t;
}
}
node* code::create_tree()
{
int i=0;
node *stack[10];
int top = -1;
while(expr[i] != '\0')
{
n = new node;
n->data[0] = expr[i];
n->data[1] = '\0';
n->left = NULL;
n->right = NULL;
if(Isoperand(expr[i]))
stack[++top] = n;
else
{
n->right = stack[top--];
n->left = stack[top--];
stack[++top] = n;
}
i++;
}
return stack[top];
}
void code::mycode(node *t,int i)
{
if(t->left == NULL && t->right == NULL)
{
cout<<"\nLOAD "<<t->data;
return;
}
f = 0;
if(t->right->left != NULL && t->right->right != NULL)
{
mycode(t->right,i);
i++;
cout<<"\nSTORE T"<<i;
t->right->data[0] = 'T';
t->right->data[1] = '1';
t->right->data[2] = '\0';
f = 1;
}
mycode(t->left,i);
if(f == 1)
{
cout<<"\n";
print(t->data);
cout<<"T"<<i;
i--;
}
else
{
cout<<"\n";
print(t->data);
cout<<" ";
print(t->right->data);
}
}
void main()
{
clrscr();
char ch;
do
{
code obj;
obj.get();
cout<<"\nAre You Want To Continue(Y/N):";
cin>>ch;
}while(ch == 'Y' || ch == 'y');
getch();
}