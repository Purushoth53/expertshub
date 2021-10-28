#include<stdio.h>
#include<conio.h>
void main()
{
int a=40,b=20,add,sub,mul,div,mod;
clrscr();
add=a+b;
sub=a-b;
mul=a*b;
div=a/b;
mod=a%b;
printf("addition of a,b is: % d/n",add);
printf("subtraction of a,b is: % d/n",sub);
printf("multiplication of a,b is: d/n",mul);
printf("modulus of a,b is: d/n,",mod);
getch();
}