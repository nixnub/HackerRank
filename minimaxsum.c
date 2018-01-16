#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void bubble_sort(long long int list[], long n);

int main(){
    long long int result[5];
    long long int a,b,c,d,e,ex;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int arr[5] = {a,b,c,d,e};
    
    for (int i=0; i < 5; i++) {
        ex = arr[i];
        result[i] = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
        result[i] = result[i] - arr[i];
    }
  
    bubble_sort(result,5);
    
        
    
    
    printf("%lld %lld", result[0], result[4]);
    
return 0;
}
    
    
void bubble_sort(long long int list[], long n)
{
  long long int c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (list[d] > list[d+1])
      {
        /* Swapping */
 
        t         = list[d];
        list[d]   = list[d+1];
        list[d+1] = t;
      }
    }
  }
}
