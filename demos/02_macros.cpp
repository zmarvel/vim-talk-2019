

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
  char buf0[256];
  char buf1[256];
  char buf2[256];
  char buf3[256];

  if (argc < 2) {
    return 1;
  }

  int number = atoi(argv[2]);

  sprintf(buf0, "%s_%d.txt", argv[1], number);
  sprintf(buf1, "%s_%d.txt", argv[1], number+1);
  sprintf(buf2, "%s_%d.txt", argv[1], number+2);
  sprintf(buf3, "%s_%d.txt", argv[1], number+3);

  return 0;
}
