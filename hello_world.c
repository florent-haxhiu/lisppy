#include "stdio.h"
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  char hello[16];

  strcpy(hello, "Hello World!");
  puts(hello);

  return 0;
}
