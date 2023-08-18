#include<stdio.h>
#include<math.h>
int main()
{
    int arr[5],i;
	float sum=0, mean=0, deviation, variance, sd;  
	printf("enter array elements:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum +arr[i];
        mean=sum/5;
    }
    for (i = 0; i < 5; i++){
		deviation=arr[i]-mean;
    	variance+= deviation*deviation;	
    }
    sd=sqrt(variance/5);
    printf("sum of all elements in array = %f\n", sum);
    printf("variance of all elements in array = %.2f\n", variance);
    printf("Standard deviation in the array: %.2f\n", sd);
    
    return 0;
}
