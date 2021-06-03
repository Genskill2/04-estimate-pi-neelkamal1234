#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

float wallis_pi(int);

int main(void) {
  float pi;
  for (int i=0; i<5; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) > 0.15)) {
      printf("Estimate with just %d iterations is %f which is too accurate.\n", i, pi);
      abort();
    }
  }

  for (int i=500; i<3000; i++) {
    pi = wallis_pi(i);
    if (!(fabs(pi - M_PI) < 0.01)) {
      printf("Estimate with even %d iterations is %f which is not accurate enough.\n", i, pi);
      abort();
    }
  }
}
  
  float wallis_pi(int x)
  { float pi_value;
      pi_value = 1.0000 ;
   
   
     for( int n=1; n<=x ; n++)
     { 
         pi_value =pi_value*(4.0*n*n)/(4.0*n*n)-1);
       
      }
   pi_value = pi_value*2;
   return pi_value;
  }
   
   


