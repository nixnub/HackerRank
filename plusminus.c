#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n;
    int pos = 0;
    int neg = 0;
    int zeros = 0;
    float result;
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    for (int i = 0; i < n; i++) {  
        if ( arr[i] > 0 ) {
            pos++;
            
        } else if ( arr[i] < 0) {
            neg++;
            
        } else if ( arr[i] == 0) {
            zeros++;
        }       
    }
      
    result = (float)pos / n;
    printf("%1f\n", result);
    result = (float)neg / n;
    printf("%1f\n", result);
    result = (float)zeros / n;
    printf("%1f\n", result);
   
    return 0;
    
}