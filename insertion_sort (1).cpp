#include<stdio.h>
#include<time.h>

void insertion_sort(int A[], int n)
{
    int j;
	for (j = 2; j <= n; j++)
	{
		int key = A[j];
		int i = j -1;
		while (i > 0 && A[i] > key)
		{
			A[i+1] = A[i];
			i = i - 1;
		}
		A[i+1] = key;
	}
}

int A[1000000+100];

int main()
{
	int i, j, n, interval, maxn = 10000;
	FILE *fin = fopen("output.txt", "r");
	n = interval = maxn/10;

	clock_t beg, end;
	double second_elapsed;
	double time_taken[100];

    for (j = 1, n = interval; n <= maxn; j++, n += interval)
    {
        for (i = 1; i <= n; i++)
            fscanf(fin, "%d", &A[i]);

        /*printf ("Before sort:\n");
        for (i = 1; i <= n; i++)
            printf ("%d ", A[i]);
        printf ("\n\n");*/

       	beg = clock();
        insertion_sort(A, n);		// find the time the function takes
        end = clock();

        /*printf ("After sort:\n");
        for (i = 1; i <= n; i++)
            printf ("%d ", A[i]);
        printf ("\n\n");*/

        time_taken[j] = (double)(end - beg) / CLOCKS_PER_SEC;
    }

    printf("Input Size\tTime Taken\n");
    for (j = 1, n = interval; n <= maxn; j++, n += interval)
        printf(" %d\t\t%f\n", n, time_taken[j]);

	return 0;
}
