#include<stdio.h>
#include<conio.h>
void main()
{
 int day;
 clrscr();
 printf("Enter any day\n");
 scanf("%d",&day);
 switch(day)
 {
  case 1:
	 printf("Monday");
	 break;
  case 2:
  printf("tuesday");
  break;
  case 3:
	 printf("Wednesday");
	 break;
  case 4:
	 printf("Thrusday");
	 break;
  case 5:
  printf("Friday");
  break;
  case 6:
	 printf("Saturday");
	 break;
  case 7:
	 printf("Sunday");
	 break;
  default:
	  printf("wrong choice\n");
	  }
	  getch();
	  }



