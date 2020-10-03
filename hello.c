#include<stdio.h>
#include<omp.h>
int main()
{
int i = 0;
int numThreads = 0;
numThreads = omp_get_num_threads();
#pragma omp parallel
{
int threadNum = omp_get_thread_num();
printf("Hello from thread %d\n", threadNum);
}
return 0;
}
