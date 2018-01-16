#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
  int n, i, t, h, j;
  scanf("%d", &t);
  for (i=0; i<t; i++) {
    scanf("%d", &n);
    h = 1;
    for (j=0; j<n; j++) {
      if (j % 2 == 1) {
        h++;
      } else {
        h *= 2;
      }
    }
    printf("%d\n", h);
  }
}