#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int findMissing(int *arr, int size);
int missingNumber(int *arr, int size);
int sumOfKeyInArray(int *arr, int k, int key);
int closeToNumber(int *arr, int n, int k);
int minCyrcleArrayNumber(int *arr, int size);
int fun_rec(int n);

void main()
{
	int n = 121;
	int result = fun_rec(n);
	printf("%d \n", result);
	
}
/*
int findMissing(int *arr, int size)
{
	int i;
	int sum = 0;
	for (i = 1; i <= size; i++)
		sum += i;
	for ( i = 0; i < size ; i++)
	{
		sum -= arr[i];
	}
	return sum;
}

int missingNumber(int *arr, int size)
{
	int high, mid, low;
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (high - low) / 2 + low;
		if (arr[mid] == mid)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return low;
}

int sumOfKeyInArray(int *arr, int k, int key)
{
	int low, mid, high;
	low = 0;
	high = k - 1;
	while (low <= high)
	{
		mid = (high - low) / 2 + low;
		if (arr[2 * mid] + arr[2 * mid + 1] == key)
			return mid;
		else if (arr[2 * mid] + arr[2 * mid + 1] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}
(2(n+1)^6+6(n+1)^5+5(n+1)^4-(n-1)^2)
int closeToNumber(int *arr, int n, int k)
{
	int low, mid, high;
	if (k < arr[0])
		return arr[0];
	if (k > arr[n - 1])
		return arr[n - 1];
	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (high - low) / 2 + low;
		if (arr[mid] < k)
		{
			if (arr[mid + 1] > k)
			{
				if (arr[mid + 1] - k > 
k - arr[mid])
					return arr[mid];
				else
					return arr[mid + 1];
			}
			else
				low = mid + 1;
		}
		else
			high = mid - 1;
		
	}
	return -1;
}

int minCyrcleArrayNumber(int *arr, int size)
{
	int low, mid, high;
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (high - low) / 2 + low;
		if (arr[mid] < arr[high])
			high = mid;
		else
			low = mid + 1;
	}
	return low;
}

int findPosNeg(int *pos, int *neg, int n, int *iPtr, int *jPtr)
{
	*jPtr = n - 1;
	*iPtr = 0;
	while ((*iPtr) >= 0 && (*jPtr) < n)
	{
		if (pos[(*iPtr)] + neg[(*jPtr)] == 0)
			return 1;
		else if (pos[(*iPtr)] + neg[(*jPtr)] > 0)
			(*iPtr)--;
		else
			(*jPtr)++;
	}
	*iPtr = *jPtr = -1;
	return 0;
}

int fun_rec(int n)
{
	if (n < 10)
		return 0;
	else if (n / 10 == 2)
		return 1;
	return fun_rec(n % 100);
}*/