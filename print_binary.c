#include<stdio.h>

#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main() {
  int i = 1;
  float f = 1;
  
  // sizes of these types won't be the same on every system
  size_t int_size = sizeof(int);
  size_t flt_size = sizeof(float);
  
  // interpret the integer and float as arrays of bytes
  char *int_ptr = (char *) &i;
  char *flt_ptr = (char *) &f;
  
  // loop through bytes and print all 8 bits individually
  // assume little endian (loop in reverse to print with LSB on the right)
  for (int b = int_size - 1; b >= 0; --b) {
    char byte = *(int_ptr + b);
    printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(byte));
    printf(" ");
  }
  printf("\n");
  
  // same thing for float
  for (int b = flt_size - 1; b >= 0; --b) {
    char byte = *(flt_ptr + b);
    printf(BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(byte));
    printf(" ");
  }
  printf("\n");
  
  return 0;
}
