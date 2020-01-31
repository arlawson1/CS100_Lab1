#include <stdio.h>

//This code was written by Andrew Lawson

int main(void)
{

  int quarters, dimes, nickels, pennies, change;

  printf("Enter the number of quarters you found on your dresser\n");
  scanf("%d", &quarters);

  printf("Now enter the number of dimes you found\n");
  scanf("%d", &dimes);

  printf("Now the nickels\n");
  scanf("%d", &nickels);

  printf("And lastly, the pennies\n");
  scanf("%d", &pennies);

  change = quarters * 25 + dimes * 10 + nickels * 5 + pennies;

  printf("You have %d cents\n", change);

  return 0;
}
