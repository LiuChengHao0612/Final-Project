/*�w�j�Ƨ�*/
#include <stdio.h>
#include <stdlib.h>

int  bubble_sort(int arr[], int n) 
{
	int i, j, temp;
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < i; j++) 
		{
			if (arr[j] > arr[i])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
