#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cmd_route(char *cmd) {}

int main(int argc, char *argv[]) {
  bool interacrive;

  char *filepath = calloc(30, sizeof(char));

  if (argc < 2) {
    interacrive = true;
  } else {
    strcpy(filepath, argv[1]);
  }

  bool ok = true;

  while (ok) {
  }

  return 0;
}
