#include "binomial.h"

int main(int argc, char **argv) {
  if(argc != 3) {
    printf("Enter the correct elements\n");
  }
    
    int n = atoi(argv[1]);
    int k = atoi(argv[2]);
  
  long **table = (long **) malloc(sizeof(long *) * (n + 1));
    
  for(int i = 0; i < (n + 1); i++) {
    table[i] = (long *) malloc(sizeof(long) * (k + 1));
    
      for(int j = 0; j < (k + 1); j++) {
      table[i][j] = -1;
    }
  }

  long coeff = choose(n, k, table);
  printf("C(%d, %d) = %ld\n", n, k, coeff);
    
  for(int i = 0; i < (n + 1); i++) {
    free(table[i]);
  }
    
  free(table);
  return 0;
}
