/******************************************************************************
 * * FILE: omp_gf.c
 * * DESCRIPTION:
 * *   OpenMP Example - Greetings from - C/C++ Version
 * ******************************************************************************/
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) 
{
  int a, tid;
  a=9000;
  /* Fork a team of threads */
  #pragma omp parallel private(a,tid)
  {
  tid=omp_get_thread_num();
  a = a + 90 ;
  #pragma omp master 
  {
    a = 10+tid ;
  } 
  printf("thread id = %d, a = %d \n", tid,a);
  }  /* end of parallel region, all threads join master */
}
