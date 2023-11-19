#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char **argv) {

  /* Print Version & Exit Information */
  puts("Lisppy Version 0.0.1\n");
  puts("Press Ctrl+C to Exit\n");

  while (1) {
    /* Output prompt & get input */
    char *input = readline("\nlispy> ");

    add_history(input);

    /* Echo user input back */
    printf("No you are a %s", input);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}
