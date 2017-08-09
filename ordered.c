#include <stdio.h>
#include <omp.h>

int main()
{
     int n;
     #pragma omp parallel
     {
          #pragma omp for ordered
          for(n=0;n<5;n++)
          {
               /*omp ordered is not defined  for printf('hello'),hence doesnt executes in order*/
               printf("hello\n");
               /*omp ordered is defined only for printf(n) so executes in order*/
               #pragma omp ordered
               printf("n=%d\n",n);
          }
     }
}
