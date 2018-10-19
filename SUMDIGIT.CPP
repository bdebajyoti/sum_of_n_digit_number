#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
/*
  2 3 4 5 6 7
+ 4 5 3 5 7 8
---------------
  6 8 8 1 4 5
---------------
This is demo program of addition of n-digit where the condition is that
no of digit in each number must be equal. It can be further developed
with addiditive features.
*/
//This is the modified version of sum of n-digit number program.
int x[100],y[100],z[100],n;
void readx(void);
void ready(void);
void addxy(void);
void main()
{
int i;
clrscr();
cout<<"\nEnter The n-Digit Number When Want To Stop Enter Zero(0) At The End";
cout<<"\nEnter n-Digit Range:";
cin>>n;
readx();
ready();
cout<<"\nEntered Number1:\n";
for(i=0;i<n;i++)
cout<<""<<x[i];
cout<<endl<<"Entered Number2:\n";
for(i=0;i<n;i++)
cout<<""<<y[i];
addxy();
getch();
}
void readx(void)
{
char c;
int i=0;
cout<<"\nEnter n-Digit Number1:";
while(i<n)
{
cin>>c;
x[i++]=c-'0';
}
}
void ready(void)
{
char c;
int i=0;
cout<<"\nEnter n-Digit Number1:";
while(i<n)
{
cin>>c;
y[i++]=c-'0';
}
}
void addxy(void)
{
int i,sum,c=0,t,d=0,j=0;
for(i=n-1;i>=0;i--)
{
sum=x[i]+y[i]+d;
t=sum;
while(t!=0)
{
t=t/10;
++c;
}
if(c==2)
{
z[j++]=sum%10;
d=1;
}
else
{
z[j++]=sum;
d=0;
}
c=0;
sum=0;
t=0;
}
cout<<"\nSum=";
for(i=n-1;i>=0;i--)
cout<<""<<z[i];
}