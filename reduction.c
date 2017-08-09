#include <stdio.h>
#include <omp.h>

int main()
{
     int i,p=5;
     #pragma omp parallel
     {
          #pragma omp for ordered reduction(+:p)
          for(i=0;i<8;i++)
          {
               p+=i;
               printf("p=%d thread=%d\n",p,omp_get_thread_num());
          }
     }
     printf("p=%d\n",p);




}
