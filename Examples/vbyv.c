/* 
Programme executant le produit terme à terme de deux tableaux
*/
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
 
int main(int argc, char *argv[])
{
  double* A;  
  double* B;
  double* C; 

  int n,m;
  int i,j,k;
  struct timeval tv1,tv2;
  struct timezone tz;
  float temps;

  /* read m n the size of the array T */
  if (argc > 1)
  {
    m = atoi(argv[1]);
  }
  else
  {
    m = 1000;
  }
  
  A = (double*) malloc(m * sizeof(double));
  B = (double*) malloc(m * sizeof(double));
  C = (double*) malloc(m * sizeof(double));

/* Temps de reference */
 
  for (i=0;i<m;i++) {
      A[i]= (double) (i+1);
      B[i]= (double) (i+1);
      C[i]= 0.f;
  } 
  gettimeofday(&tv1, &tz);
/* Produit terme à terme */
  for (i=0;i<m;i++) {
      C[i] = A[i] * B[i];
  }
/* Temps final */
 
  gettimeofday(&tv2, &tz);
  temps = (tv2.tv_sec - tv1.tv_sec) + (tv2.tv_usec - tv1.tv_usec)/1000000.0 ;
 
/* Impression des resultats */
  printf("\n\n\t\tTemps de restitution : %15.4f sec.\n\t\tResulat partiel : %g %g ... %g %g\n\n ",
	 temps,C[0], C[1],C[m-2],C[m-1]); 
  return 0;
}
