#include <stdio.h>
#include <time.h>

int aleat(void) {
  static long int t = 0;
  time(&t);

  static unsigned s = 0;
  if (!s) s = t%1000;
  auto   unsigned n = s%100;

  s += s/10;
  return n;
}

int main() {
  for(int i = 0; i < 10; i++) {
    printf("%d \n", aleat());
  }
}