#include <stdio.h>

//This code was written by Andrew Lawson

int main(void)
{

  int weight;
  double gold, worth;

  printf("What is your weight?\n");
  scanf("%d", &weight);

  printf("Now what is the current value of gold per ounce?\n");
  scanf("%lf", &gold);

  worth = weight * (gold * 16);

  printf("Your weight in gold is %lf", worth);


  return 0;
}
