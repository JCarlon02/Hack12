#include "binomial.h"

/*long choose(int n, int k){
    
    if(k > n){
        printf("Its 0\n"){
            return 0;
        }
    }
    
    if(k == 0 || n == k){
        return 1;
    }
    return (choose((n - 1), k) + choose((n - 1), (k - 1)));
    
}*/

long choose(int n, int k, long **data){
    
    if(k > n){
        printf("Its 0\n");
            return 0;
        
    }
    
    if(k == 0 || n == k){
        return 1;
    }
    if(data[n][k] != -1) {
      return data[n][k];
    }
      
    data[n][k] = choose((n - 1), k, data) + choose((n - 1), (k - 1), data);
    
    return (choose((n - 1), k, data) + choose((n - 1), (k - 1), data));
    
}
