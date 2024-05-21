#include <stdio.h>

int main(void) {
  char *name[3];
  name[0] = "aaa";
  name[1] = "<3";
  name[2] = "bbb";
  for (int n = 0; n < 3; n++) {
    puts(name[n]);
    printf("\n");
  }
}