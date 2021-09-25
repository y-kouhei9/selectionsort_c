# include <stdio.h>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void SelectionSort(int A[], int n)
{
	int i, j, k;

	for (i = 0; i < n-1; i++) 
	{
		for (j = k = i; j < n; j++) 
		{
			if (A[j] < A[k]) {
				k = j;
			}
		}
		swap(&A[i], &A[k]);
	}
}

int main(void)
{
	int A[] = {4, 39, 2, 0, 41, 8, 37, 9, 12, 11, 6};
	int n = sizeof(A)/sizeof(A[0]);
	int i;

	SelectionSort(A, n);

	for (i = 0; i < n; i++) 
	{
		printf("%d ", A[i]);
	}
	printf("\n");

	return 0;
}