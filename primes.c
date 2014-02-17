#include <stdlib.h>
#include <stdio.h>
#include <omp.h>

/*Generate a list of every prime leq N*/
int * fetchPrimes( int N )
{
	/*Generate a list of integers from 2 to N*/
	int i, j;
  int * isPrime = malloc( (N + 2)*sizeof(int));
	isPrime[0] = 0;
	isPrime[1] = 0;
	isPrime[2] = 1;
  for( i = 2; i < N; i ++ )
	{
		//Assume all numbers are prime
		isPrime[i] = 1;
	}
}
