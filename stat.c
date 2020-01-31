#include <stdio.h>

//This code was written by Andrew Lawson

int main(void)
{

  int a, b, c;
  double average;

  printf("Enter 3 numbers, and I'll give you the average of all 3\n");

  scanf("%d\n %d\n %d", &a, &b, &c);

  average = ((double)(a + b + c) / 3);

  printf("Your average is %lf", average);

  return 0;
}
