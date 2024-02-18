#include <stdio.h>
#include "saudacau.h"

int main() {
  int num;
  printf("Portugues(1): \ningles(2): \nfrances(3): \nespanhol(4): ");
  scanf("%d", &num);
  printf("%d", func(num));
  
  
}