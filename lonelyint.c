#include <stdio.h>
#include <string.h>


int main(){
    
    int i,c,d,j,n,temp;
    scanf("%d", &n);
    int array[n];
    
    for (int i = 0; i < n; i++){   
        scanf("%d", &array[i]);
    }
    
    // sorting
for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
        temp       = array[d];
        array[d]   = array[d+1];
        array[d+1] = temp;
      }
    }
}
       
    for (int i = 0; i < n; i++){   
        
        if ( array[i] == array[i+1]) {
            
            i++;
            
        } else {
            
            printf("%d", array[i]);
        }
    } 

    return 0;
}


