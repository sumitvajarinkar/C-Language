#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],sum=0,i,j;
 clrscr();
 printf("Enter 9 elements\n");
  for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
    for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      sum=sum+a[i][j];
     }
    }
      printf("sum=%d",sum);
 getch();
}
