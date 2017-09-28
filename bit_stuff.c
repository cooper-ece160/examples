int main() {
  // to get the minimum value using two's complement, 
  // set only the most significant bit
  char min_char =  1 << 7;
  // to get the max, flip all the bits so they are all
  // set EXCEPT the most significant bit
  char max_char = ~min_char;
  printf("char min: %d char max: %d\n", min_char, max_char);
  return 0;
}
