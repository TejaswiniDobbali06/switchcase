#include<iostream.h>
#include<stdio.h>
main()
{ 
  printf("\nEnter the choice in between 1 and 5 :\n" );
  int choice=0;
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
           printf("\nFood item - Pizza\nPrice - 239\n");
           break;
    case 2:
           printf("\nFood item - Burger\nPrice - 129\n");
           break;
    case 3:
           printf("\nFood item - pasta\nPrice - 179\n");
           break;
    case 4:
          printf("\nFood item - French Fries\nPrice - 99\n");
          break;
          
    case 5:
           printf("\nFood item - Sandwich\nPrice - 149\n");
           break;
    default :
           printf("\nInvalid choice.\nEnter the choice in between 1 and 5 : \n");
  }
  }
  
