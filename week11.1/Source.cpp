#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int n[10];
int main()
{
	for (int j = 0; j < 10; j++)
	{
		printf("Enter number : ");
		scanf("%d", &n[j]);
	}
	printf("\n------------------------------\n");
	printf("Data in array: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", n[i]);
	}
	printf("\nResult: ");
	for (int h = 0; h < 10; h++)
	{
		if (h >= 1 && h <= 8)
		{
			if (n[h - 1] & 2 != 0 && n[h + 1] & 2 != 0)
			{
				printf("%d ", n[h]);
			}
		}
	}
	return 0;
}