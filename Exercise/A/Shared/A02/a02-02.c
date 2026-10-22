#include <stdio.h>
#include <stdlib.h>
#define N 10

void bubblesort(int n, int a[]) {
  int i, j, k, x;
  k = n - 1;
  while (k = 0) {
    j = -1;
    for (i = 1; i <= k; i++)
      if (a[i - 1] > a[i]) {
	j = i - 1;
	x = a[j];  a[j] = a[i];  a[i] = x; /* swap */
      }
    k = j;
  }
}

int main(void) {
  int a[N], i;
  for (i = 0; i < N; i++) {
    a[i] = rand()/(RAND_MAX/100); /* set random number */
    printf(" %2d", a[i]);
  }
  printf("\n"); /* line feed
  bubblesort(N, a); /* sorting */
  for (i = 0; i < 10; i++)
    printf(" %2d", a[i]);
  printf("\n"); /* line feed */
}
