#include<stdio.h>
#include<conio.h>
void main()
{
   int idly=100,dosai=50,tea=50,vadai=200;
   int aidly,adosai,atea,avadai;
   int hidly,hdosai,htea,hvadai;
   int cidly,cdosai,ctea,cvadai;
   int balance,bidly,bdosai,btea,bvadai;
  // scanf("%d%d%d%d",&aidly,&adosai,&tea,&avadai);
   printf("enter alagu's idly:");
   scanf("%d",&aidly);
   printf("enter alagu's dosai:");
   scanf("%d",&adosai);
   printf("enter alagu's tea:");
   scanf("%d",&atea);
   printf("enter alagu's vadai:");
   scanf("%d",&avadai);
   printf("enter Hari  idly:");
   scanf("%d",&hidly);
   printf("enter hari's dosai:");
   scanf("%d",&hdosai);
   printf("enter hari's tea:");
   scanf("%d",&htea);
   printf("enter hari's vadai:");
   scanf("%d",&hvadai);
   printf("enter chandru's idly:");
   scanf("%d",&cidly);
   printf("enter chandru's dosai:");
   scanf("%d",&cdosai);
   printf("enter chandru's tea:");
   scanf("%d",&ctea);
   printf("enter chandru's vadai:");
   scanf("%d",&cvadai);
   bidly=idly-aidly;
   bdosai=dosai-adosai;
   btea=tea-atea;
   bvadai=vadai-avadai;
   bidly=bidly-hidly;
   bdosai=bdosai-hdosai;
   btea=btea-htea;
   bvadai=bvadai-hvadai;
   bidly=bidly-cidly;
   bdosai=bdosai-cdosai;
   btea=btea-ctea;
   bvadai=bvadai-cvadai;
   printf("\nbalance idly:%d\n",bidly);
   printf("\nbalance dosai:%d\n",bdosai);
   printf("\nbalance tea:%d\n",btea);
   printf("\nbalance vadai:%d\n",bvadai);
   getch();
}