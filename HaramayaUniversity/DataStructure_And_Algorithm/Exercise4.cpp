
/*

Question:

Write a program that displays the total running time for
various input sizes of the complexity category function and
plot a graph (input size Vs time) for each function. By
observing the graph write functions in ascending order of
complexity.

HINT: I'm using arrays of different sizes to plot the graph between the time taken by the sorting algorithm versus array size. Execution of the program will take some time for sorting arrays of size up to 100000 elements.



* Input:
randomly generated arrays (using rand() function)
    of different sizes as input for sorting.

*Output:
A_size, Bubble, Insertion, Selection
10000, 366263, 80736, 152975
20000, 1594932, 332101, 609388
*/




// C program to store time taken by bubble sort,
// insertion sort and selection sort
// for sorting exactly same arrays.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Swap utility
void swap(long int* a, long int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// Bubble sort
void bubbleSort(long int a[], long int n)
{
	for (long int i = 0; i < n - 1; i++) {
		for (long int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(&a[j], &a[j + 1]);
			}
		}
	}
}

// Insertion sort
void insertionSort(long int arr[], long int n)
{
	long int i, key, j;
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1], that are
		// greater than key, to one position ahead
		// of their current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

// Selection sort
void selectionSort(long int arr[], long int n)
{
	long int i, j, midx;

	for (i = 0; i < n - 1; i++) {

		// Find the minimum element in unsorted array
		midx = i;

		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				midx = j;

		// Swap the found minimum element
		// with the first element
		swap(&arr[midx], &arr[i]);
	}
}

// Driver code
int main()
{
	long int n = 10000;
	int it = 0;

	// Arrays to store time duration
	// of sorting algorithms
	double tim1[10], tim2[10], tim3[10];

	printf("A_size, Bubble, Insertion, Selection\n");

	// Performs 10 iterations
	while (it++ < 10) {
		long int a[n], b[n], c[n];

		// generating n random numbers
		// storing them in arrays a, b, c
		for (int i = 0; i < n; i++) {
			long int no = rand() % n + 1;
			a[i] = no;
			b[i] = no;
			c[i] = no;
		}

		// using clock_t to store time
		clock_t start, end;

		// Bubble sort
		start = clock();
		bubbleSort(a, n);
		end = clock();

		tim1[it] = ((double)(end - start));

		// Insertion sort
		start = clock();
		insertionSort(b, n);
		end = clock();

		tim2[it] = ((double)(end - start));

		// Selection sort
		start = clock();
		selectionSort(c, n);
		end = clock();

		tim3[it] = ((double)(end - start));

		// type conversion to long int
		// for plotting graph with integer values
		printf("%li, %li, %li, %li\n",
			n,
			(long int)tim1[it],
			(long int)tim2[it],
			(long int)tim3[it]);

		// increases the size of array by 10000
		n += 10000;
	}

	return 0;
}
