#include <stdio.h>

int main() {
  int num;
  int digits = 0;

  // Get the number from the user
  printf("Enter an integer: ");
  scanf("%d", &num);

  // Handle negative numbers efficiently
  if (num < 0) {
    num = -num; // Convert to positive equivalent
    digits++; // Account for the negative sign
  }

  // Count the digits using efficient bitwise operation
  while (num > 0) {
    digits++;
    num >>= 1; // Right shift to divide by 2, equivalent to dividing by 10 (base 2)
  }

  // Output the number of digits with a descriptive message
  printf("The number of digits is: %d\n", digits);

  return 0;
}