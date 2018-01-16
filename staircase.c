#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

    int n,height, space, hash;
    scanf("%d",&n);
    height = n;
    for (int counter=1; counter <= height; counter++) {
        for (space = ( height - counter ); space > 0; space--) {
            printf(" ");
        }
        for (hash = 2; hash<=(counter + 1); hash++) {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
