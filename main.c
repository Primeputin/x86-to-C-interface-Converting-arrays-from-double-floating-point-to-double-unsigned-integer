#include <stdio.h>
#include <time.h>
#include <stdbool.h>
extern void imgCvtGrayDoubleToInt(int rowSize, int colSize, double arr[90000], long long unsigned output[90000]);
int main()
{
	int rowSize = 0;
	int colSize = 0;
	double arr[90000];
	long long unsigned output[90000];
	scanf("%d", &rowSize);
	scanf("%d", &colSize);
//	printf("%d\n", rowSize);
//	printf("%d\n", colSize);
	int i, j;
	int count = 0;
	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < colSize; j++)
		{
			scanf("%lf", &arr[count]);
			count+=1;
		}
	}
	
	imgCvtGrayDoubleToInt(rowSize, colSize, arr, output);
	
//	count = 0;
//	for (i = 0; i < rowSize; i++)
//	{
//		for (j = 0; j < colSize; j++)
//		{
//			printf("%lf ", arr[count]);
//			count+=1;
//		}
//		printf("\n");
//	}
//	
	count = 0;
	for (i = 0; i < rowSize; i++)
	{
		for (j = 0; j < colSize; j++)
		{
			printf("%llu ", output[count]);
			count+=1;
		}
		printf("\n");
	}
	return 0;
}
