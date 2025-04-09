#include <stdio.h>
#include <stdlib.h>

int main() {
  system("clear");

  printf("%d %d %d %d", !3, !0, 3+'a'>'b'+2 && !'b', 1 || (!2 && 3));

  return 0;
}