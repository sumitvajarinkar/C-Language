#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],t[3][3],i,j;
 clrscr();
 printf("Enter 9 elements\n");
  for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
  printf("Matrix\n");
  for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      printf("\t%d",a[i][j]);
      }
      printf("\n");
   }
   printf("Transpose\n");
 for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
     {
      t[i][j]=a[j][i];
    printf("\t%d",t[i][j]);
  }
  printf("\n");
 }
 getch();
}