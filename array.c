#include <stdio.h>
int main() {
  int x = 0, num[4];
  for (x = 0; x < 4; x++) {
    num[x] = (x + 1) * x;
  }
  for (x = 0; x < 4; x++) {
    printf("%d \n", num[x]);
  }

  return 0;
}