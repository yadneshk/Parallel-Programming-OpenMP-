#include<stdio.h>
#include<omp.h>

int main()
{
     int i=0,j=1,N,nextTerm;
     printf("Enter the limit\n");
     scanf("%d",&N);
     for(i=1;i<=N;i++)
     {
          printf("%d\t",i);
          nextTerm=i+j;
          i=j;
          j=nextTerm;
     }
     printf("SUM=%d\n",nextTerm);
     return 0;
}
