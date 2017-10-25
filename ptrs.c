#include <stdio.h>

int main() {
  int *ip = malloc(sizeof int)
  *ip = 10;
  printf("%d\n", *ip);
  free(ip);
  return 0;
}
