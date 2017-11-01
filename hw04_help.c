#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {  
  char *filename = "hw04_help_input.txt";
  FILE *fp = fopen(filename, "r");
  char buffer[256];
  char *string_array[256];
  
  if (fp == NULL) {
    printf("Could not open %s\n", filename);
    return -1;
  }

  // read one line at a time
  char *s;
  int i = 0;
  
  // First loop to process input file
  while ((s = fgets(buffer, 255, fp)) != NULL) {
    //printf("Buffer: %s", buffer);
	size_t len = strlen(buffer);
	size_t len_bytes = (len + 1) * sizeof(char);
	char *new_string = malloc(len_bytes);
	
	// option 1: memcpy
	memcpy(new_string, buffer, len_bytes);
	
	// option 2: loop
	/*	
	for (int c = 0; c <= len; c++) {
	  new_string[c] = buffer[c];
	}
	*/
	string_array[i] = new_string;
	i++;
  }
  
  // Second loop to access data array
  for (int j = 0; j < i; j++) {
	printf("string_array[j]: %s", string_array[j]);  
  }
  
  // Final loop to clean up memory
  for (int j = 0; j < i; j++) {
	if (string_array[j] != NULL) {
	  free(string_array[j]);
	}
  }
 
  fclose(fp);
  return 0;

}
