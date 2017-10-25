#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {  
  // create a buffer that can hold
  // up to 255 characters
  char buf[];
  buf = "Hello";
  char buffer[256];


  // read one line at a time and send it to calc function for processing
  while(1) {
	  char *s;
	  char op;
	  float x, y;
	  fscanf(stdin, "%c %f %f", &op, &x, &y);
	  switch (op) {
		case '+' : printf("%.2f\n", x + y); break;
		case '-' : printf("%.2f\n", x - y); break;
		case 'x' : printf("%.2f\n", x * y); break;
		case '/' : printf("%.2f\n", x / y); break;
	  }
  }

  /*
  while ((s = fgets(buffer, 255, stdin)) != NULL) {
    float ans = calc(buffer);
    printf("%.2f\n", ans);
  }
  */
  return 0;
}
