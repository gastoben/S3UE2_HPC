#include <stdlib.h>
#include <stdio.h>

int fib_rec(int n)
{
  int i, j;
  if (n<2)
    return n;
  else
    {
       i=fib_rec(n-1);
       j=fib_rec(n-2);
       return i+j;
    }
}

int main(int argc, char *argv[])
{
  int n,f;
  if (argc > 1)
    n= atoi(argv[1]);
  else
  {
    printf("Enter n \n");
    scanf("%d", &n);
  }
  f=fib_rec(n);
  printf("n %d fibonacci de n %d \n",n,f);
  return 0;
}
