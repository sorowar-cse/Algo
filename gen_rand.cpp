#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int i, x, n = 100;
	srand(time(NULL));
	// srand() seeds the pseudorandom sequence generator
	// time() returns number of seconds from January 1, 1970

	FILE *fout = fopen ("random.txt", "w");

	for (i = 0; i < n; i++)
	{
		x = rand();	// rand() generates pseudorandom sequence
		fprintf (fout, "%d\n", x);
	}
}

/*
insertion_sort(....);

clock_t beg_t, end_t;

beg_t = clock();
merge_sort(....);
end_t = clock();

double time_elapsed = (end_t-beg_t)/CLOCKS_PER_SEC;

printf("%f\n", time_elapsed);



X0
X1
X(i+1) = (aX(i) + c ) mod m		--> psudo-random

Probability distribution


Seed the random number generator


Donald Knuth
The Art of Computer Programming

Randomness


X12345Y

check digit

error correcting code


hash code

not bijection

y = f(x)
x = f'(y)

*/
