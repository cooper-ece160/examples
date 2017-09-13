#include <stdio.h>      // printf
#include <stdlib.h>     // atoi
int main(int argc, char* argv[]) {
  if (argc == 1) {
    printf("Not enough arguments!\n");
    return(-1); // nonzero exit code indicates problem
  } 
  int cmd = atoi(argv[1]);
  switch (cmd) {
    case 0:
      printf("zero\n");
      break;
    case 1:
      printf("one\n");
      break;
    default:
      printf("Unrecognized arg\n");
  }
  return 0;
}

