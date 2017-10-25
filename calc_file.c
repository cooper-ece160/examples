#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calc(char *args);

int main(int argc, char *argv[]) {
  char *filename = argv[1];
  FILE *fp;
  
  // create a buffer that can hold 3 strings of
  // up to 255 characters each
  char buffer[256];
  
  // open file for reading
  fp = fopen(filename, "r");

  if (fp == NULL) {
    printf("Could not open %s\n", filename);
    return -1;
  }

  // read one line at a time and send it to calc function for processing
  char *s;
  while ((s = fgets(buffer, 255, fp)) != NULL) {
    float ans = calc(buffer);
    printf("%.2f\n", ans);
  }
  fclose(fp);
  return 0;
}

float calc(char *args) {
  char op;
  float x, y;
  sscanf(args, "%c %f %f", &op, &x, &y);
  switch (op) {
    case '+' : return x + y;
    case '-' : return x - y;
    case 'x' : return x * y;
    case '/' : return x / y;
  }
  printf("Error: Unrecognized operator %c\n", op);
  return 0;
}
