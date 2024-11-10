#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void bubble(int*, int);
void swap(int*, int);
void input(int*, int);
void show(int*, int, const char*);

void main()
{
	int* arr = NULL;
	int n;
	printf("\nenter the no. element of array=");
	scanf_s("%d", &n);
	arr = (int*)malloc(n * sizeof(int));
	if (arr == NULL)
	{
		printf("/nmemory is not allocated");
		exit(EXIT_FAILURE);
	}
	input(arr, n);
	show(arr, n, "\nbefore");
	bubble(arr, n);
	show(arr, n, "\nafter");
}
void input(int* arr, int n)
{
	int i;
	srand(time(0));
	for (i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}
void show(int* arr, int n, const char* msg)
{
	int i;
	if (msg != NULL)
	{
		puts(msg);
	}
	for (i = 0; i < n; i++)
	{
		printf("\narr[%d]=%d", i, arr[i]);
	}

}

void swap(int* arr, int n)
{
	int i, j,temp,flag=0;
	for (i = 1; i < n; i++)
	{
		for (j = 0; j < n - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
void bubble(int* arr, int n)
{
	swap(arr, n);
	
}
