/*�ֳt�Ƨ�*/
#include <stdio.h>
#include <stdlib.h>

int quick_sort(int arr[], int first_index, int last_index)
{
	// �ŧi�����ܼ�
	int pivotIndex, temp, index_a, index_b;

	if (first_index < last_index) {
		// �H�Ĥ@�Ӥ����@�����
		pivotIndex = first_index;
		index_a = first_index;
		index_b = last_index;

		// �H���W�覡�Ƨ�
		while (index_a < index_b)
		{
			while (arr[index_a] <= arr[pivotIndex] && index_a < last_index)
			{
				index_a++;
			}
			while (arr[index_b] > arr[pivotIndex])
			{
				index_b--;
			}

			if (index_a < index_b) 
			{
				// �洫����
				temp = arr[index_a];
				arr[index_a] = arr[index_b];
				arr[index_b] = temp;
			}
		}

		// �洫��Ǥ����P index_b ����
		temp = arr[pivotIndex];
		arr[pivotIndex] = arr[index_b];
		arr[index_b] = temp;

		// ���j�I�s�ֳt�ƧǪk���
		quick_sort(arr, first_index, index_b - 1);
		quick_sort(arr, index_b + 1, last_index);
	}
}