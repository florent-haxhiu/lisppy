#include <stdio.h>
#include <stdlib.h>

/* Run this code on windows */
#ifndef _WIN32
#include <string.h>

static char buffer[2048];

/* Fake readline */
char *readline(char *prompt) {
  fputs(prompt, stdout);
  fgets(buffer, 2048, stdin);
  char *cpy = malloc(strlen(buffer) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

/* Fake add_history */
void add_history(char *unused){};

#else
#include <editline/readline.h>
#endif /* ifndef _WIN32 */

int main(int argc, char **argv) {

  /* Print Version & Exit Information */
  puts("Lisppy Version 0.0.1\n");
  puts("Press Ctrl+C to Exit\n");

  while (1) {
    /*
     * Output prompt & get input
     * Either way, readline will always be correct
     */
    char *input = readline("\nlispy> ");

    add_history(input);

    /* Echo user input back */
    printf("No you are a %s", input);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}
