// Macro to determine if a character is uppercase

#include <stdio.h>

#define IS_UPPER_CASE(x) (x) >= 'A' && (x) <= 'Z' ? 1 : 0

int main(void) {

  printf ("%d\n", IS_UPPER_CASE('F')); // 1
  printf ("%d\n", IS_UPPER_CASE('f')); // 0
  
  return 0;
}