#include "stdio.h"
#include <iostream>
using namespace std;

void swap(int *a, int x, int y) {
	int temp;
	temp = a[x];

	a[x] = a[y];
	a[y] = temp;

}

void Quicksort(int A[], int left, int right) {
	int pivot, i, j, temp;
	if (left < right) {
		pivot = A[left];
		i = left;
		j = right+1;
		int x = 0;
		while (i<j) {
			while (i+1 <= right && A[++i] > pivot)
				break;

			while (j-1 > -1 && A[--j] < pivot)
				break;

			if (i >= j)
				break;

			swap(A, i, j);

			
		}
		

		swap(A, left, j);
		Quicksort(A, left, j - 1);
		Quicksort(A, j + 1, right);
	}
}

int main()
{
	int a[] = {10, 15, 5, 30, 50};
	int m = 0, n = sizeof(a)/sizeof(int);
	Quicksort(a, m, n-1);

	for (int i = 0; i < n; i++) {		
		printf("%d ", a[i]);
	}	

	system("pause");
	return 0;
}
