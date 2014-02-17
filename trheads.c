#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
	int tid;
	#pragma omp parallel private(tid)
	tid = omp_get_thread_num();
	printf("Hi, my name is thread number %d\n",tid);
}
