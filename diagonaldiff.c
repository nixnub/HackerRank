#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n, rtol = 0, ltor = 0, sum;
    unsigned int diff;
    scanf("%d",&n);
    int a[n][n];
    for(int i = 0; i < n; i++){
       for(int j = 0; j < n; j++){
          scanf("%d",&a[i][j]);
       }
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; i++){
            rtol = rtol + a[i][i];
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; i < n; i++){
            ltor = ltor + a[i][n-i-1];
        }
    }

    diff = rtol - ltor;
    printf("%d", abs(diff));
    return 0;
}
