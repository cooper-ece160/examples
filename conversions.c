#include<stdio.h>
#include<stdlib.h>
int main() {
  char s[] = "5";
  int i = 5;
  float x = i;        // implicit conversion
  x = (float)i;       // explicit cast
  //float y = s;      // incompatible type error!
  float y = atof(s);  // stdlib function
  printf("x = %f, y = %f\n", x, y);
  return 0;
}
