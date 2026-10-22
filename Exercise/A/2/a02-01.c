#include <stdio.h>

#define N 2000
#define M 2100

void main(void) {
  int year;
  
  printf("Leap year list (from %d to %d):\n", N, M);
  for (year = N; year <= M; year++) {
    if (year%400 == 0 || (year%4 == 0 && year%100 != 0)) {
      printf("%d\n", year);
    }
  }
  return 0;
}
