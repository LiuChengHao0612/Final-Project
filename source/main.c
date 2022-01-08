#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main(void)
{
	int i;


	while (1)
	{
		printf("Sorting\n");
		printf("If enter 0 break\n");
		printf("If enter 1 bubble_sort\n");
		printf("If enter 2 insertion_sort\n");
		printf("If enter 3 quick_sort\n");
		printf("If enter 4 selection_sort\n");

		printf("Enter a number(0~4) : ");
		scanf_s("%d", &i);
		printf("\n");

		switch (i)
		{
		case 0:
			return 0;
			break;

		case 1:
			bubble();
			break;

		case 2:
			insert();
			break;

		case 3:
			quick();
			break;

		case 4:
			selection();
			break;
		}
	}
	return 0;
}