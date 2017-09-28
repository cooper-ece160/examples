int main() {
  // SIGNED
  // to get the minimum value using two's complement, 
  // set only the most significant bit
  char min_char =  1 << 7;
  // to get the max, flip all the bits so they are all
  // set EXCEPT the most significant bit
  char max_char = ~min_char;

  // UNSIGNED
  unsigned char min_uc = 0;
  unsigned char max_uc = ~min_uc;

  printf("char min: %d char max: %d\n", min_char, max_char);
  printf("unsigned char min: %u unsigned char max: %u\n", min_uc, max_uc);
  return 0;
}
