#include <stdio.h>

struct S1 {
  int data_size;
  float data[128];
}; // semicolon at end of def

// with typedef
typedef struct {
  int data_size;
  float data[128];
} S2;

// functions can return structs and take them as args
void print_S2(S2 s) {
  printf("[ ");
  for (int i = 0; i < s.data_size; i++) {
    printf("%.2f ", s.data[i]);
  }
  printf("]\n");
}

int main() {
  struct S1 s1;
  S2 s2;

  s2.data_size = 10;
  for (int i = 0; i < s2.data_size; i++) {
    s2.data[i] = i*2;
  }
  print_S2(s2);
  return 0;
}
