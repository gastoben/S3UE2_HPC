#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define NB_RUNS 1000

double f(double x) {
    return -4*x*x*x +3*x*x +2*x;
}

double integrate_f_c(double a, double b, int N) {
    double s  = 0;
    double dx = (b - a) / (N-1);
    for(int i=0; i<N-1; ++i){
        double x = a + i*dx;
        s += (f(x)+f(x+dx))/2.0;
    }
    return s*dx;
}

int main(int argc, char **argv)
{
  
  double a =  atof(argv[1]);
  double b =  atof(argv[2]);
  int N    =  atoi(argv[3]);
  double  res = 0;

  clock_t begin = clock();

  for (int i=0; i<NB_RUNS; ++i)
      res += integrate_f_c( a, b, N );
    
  clock_t end = clock();
     
  fprintf( stdout, "integral_f(%3.1f, %3.1f, %d) = %f \n", a, b, N, res / NB_RUNS );
  fprintf( stdout, "time = %e ms \n",  (double)(end - begin) / CLOCKS_PER_SEC );

  return 0;
}