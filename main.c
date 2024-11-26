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

    // Input the rowSize and colSize
    scanf("%d", &rowSize);
    scanf("%d", &colSize);

    int i, j;
    int count = 0;

    // Read the array values
    for (i = 0; i < rowSize; i++) {
        for (j = 0; j < colSize; j++) {
            scanf("%lf", &arr[count]);
            count += 1;
        }
    }

    struct timespec start, end;
    long long temp = 0;
    long long time_taken = 0;
	for (i=0;i<30;i++)
	{
    // Measure execution time of imgCvtGrayDoubleToInt
    clock_gettime(CLOCK_MONOTONIC, &start); // Start time

    imgCvtGrayDoubleToInt(rowSize, colSize, arr, output);

    clock_gettime(CLOCK_MONOTONIC, &end); // End time

    // Calculate elapsed time in nanoseconds
    temp += (end.tv_sec - start.tv_sec) * 1000000000 + (end.tv_nsec - start.tv_nsec);
    time_taken += temp;
    
}
    // Print the time taken in nanoseconds
    time_taken /=30;
printf("--------------------------------\n");
    // Print the output array
    count = 0;
    for (i = 0; i < rowSize; i++) {
        for (j = 0; j < colSize; j++) {
            printf("%llu ", output[count]);
            count += 1;
        }
        printf("\n");
    }
printf("Time taken by imgCvtGrayDoubleToInt: %lld nanoseconds\n", time_taken);
printf("Rows: %d\n", rowSize);
printf("Columns: %d\n", colSize);
    return 0;
}

