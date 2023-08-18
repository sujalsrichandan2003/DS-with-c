#include <stdio.h>

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int i, median = 0, middle = 0;

    middle = 6 / 2;

    if (6 % 2 == 1)
    {
        median = arr[middle];
        printf("The median is: %d\n", median);
    }
    else
    {
        median = (arr[middle] + arr[middle - 1]) / 2;
        printf("The median is: %d\n", median); 
    }

    return 0;
}

