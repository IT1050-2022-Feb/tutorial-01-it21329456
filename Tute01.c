/* Exercise 1 - Calculations
   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1,int mark2;
  int sum;//to get sum of 2 marks
  int avg;//average 

  printf("Enter mark1:");
  scanf("%d",&mark1);

  printf("Enter mark2:");
  scanf("%d",&mark2);

  sum=mark1+mark2;
  avg=sum/2;

  printf("Average of marks :%d,avg");
  return 0;
}

