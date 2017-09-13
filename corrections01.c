#include<stdio.h>

int main() {
  int a[4] = {2, 4, 6, 8};
  int nbytes = sizeof(a);
  int nints = nbytes / sizeof(int);
  printf("a has %d bytes or %d elements\n",
    nbytes, nints); 
  int *ap = a;
  nbytes = sizeof(ap);
  printf("ap has %d bytes\n", nbytes);
  return 0; 
}
