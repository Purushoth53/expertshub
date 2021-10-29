#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int balance,bidly,bdosai,btea,bvadai;
  // scanf("%d%d%d%d",&aidly,&adosai,&tea,&avadai);
   printf("enter alagu's Breakfst\n:");
   scanf("%d",&aidly);
   printf("enter alagu's idly\n:",aidly);
   scanf("%d",&adosai);
   printf("enter alagu's dosai\n:",adosai);
   scanf("%d",&atea);
   printf("enter alagu's tea\n:",atea);
   scanf("%d",&avadai);
   printf("enter alagu's vadai\n:",avadai);
   bidly=idly-aidly;
   bdosai=dosai-adosai;
   btea=tea-atea;
   bvadai=vadai-avadai;
   printf("\nbalance idly:%d\n",bidly);
   printf("\nbalance dosai:%d\n",bdosai);
   printf("\nbalance tea:%d\n",btea);
   printf("\nbalance vadai:%d\n",bvadai);
   getch();
}