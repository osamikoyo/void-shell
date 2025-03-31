#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmd_route(char *cmd) {}

char *cd_route(char *cmd) {}

int main(int argc, char *argv[]) {
  bool interacrive;

  char *filepath = calloc(30, sizeof(char));
  char *current_dir = calloc(50, sizeof(char));
  char *welcome = calloc(70, sizeof(char));

  strcpy("~", current_dir);

  if (argc < 2) {
    interacrive = true;
  } else {
    strcpy(argv[1], filepath);
  }

  bool ok = true;

  while (ok) {
    sprintf(welcome, "%s\n%s", current_dir, "void_|||> ");

    printf("%s", welcome);
  }

  free(current_dir);
  free(filepath);

  return 0;
}
