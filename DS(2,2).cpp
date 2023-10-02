
#include <stdio.h>
int main()
{ 
    int row=3,col=4;
    int arr[row][col] = {{1, 2, 3, 4},
                         {5, 6, 7, 8},
                         {9, 1, 2, 6}};
    int sum = 0; 
    for(int i = 0; i < row; i++)
    { 
        for(int j = 0; j < col; j++)
        { 
            sum = sum + arr[i][j];
        }
    } 
    printf("The sum of all elements in the array is %d\n", sum);
    return 0;
}

