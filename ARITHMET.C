#include <stdio.h>
#include <math.h>
#include <conio.h>
main()
{
int a[10],w[10],i,j,am=0,n,temp,temp1;
int i spercube(int);
int i sprime(int);
clrscr();
printf("\n enter the limit\n");
scanf("%d",&n);
printf("\nenter the number\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
w[i]=0;
}
for(i=0;i<n;i++)
{
if(i spercube(a[i]))
w[i]=w[i]+5;
if(a[i]%4==0&&a[i]%6==0)
w[i]=w[i]+4;
if(is prime(a[i])
w[i]=w[i]+3;
sum=sum+w[i];
}
for(i=0;i<n;i++)
{
if(w[i]>w[j])
{
temp=w[i];
w[i]=w[j];
w[j]=temp;
temp1=a[i];
a[i]=a[j];
a[j]=temp1;
}
}
}
printf("\n number\t weight\n");
for(i=0;i<n;i++)
{
printf("\n <%d%d>",a[i],w[j]);
}
printf("\n...........");
printf("\n sum of weights %d", sum);
printf("\n.........");
getch();
return 0;
}
int ispercube(int p);
{
int croot;
croot=cell(pow(p,1.0/3.0));
if(croot*croot*croot==p)
return 1;
else
return 0;
}
int isprime(int pn)
{
int i,f=0;
for(i=2;i<=pn/2;i++)
{
if(pn%i==0)
{
f=1;
break;
}
}
if(f==0)
return 1;
else
return 0;
}
