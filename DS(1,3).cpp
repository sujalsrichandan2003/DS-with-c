#include<stdio.h>

int main()
{
    int arr[7] = {25, 28, 27, 30, 31, 29, 26};
    int sum = 0,max=arr[0],min=arr[0], range=0; 
    int i; 
    // finding average temperature
    for (i = 0; i < 7; i++) 
    {
        sum += arr[i];
    }
    
    float average = (float)sum / 7; 
    printf("Average temperature = %.2f\n", average);
    
    //finding highest and lowest temperature
    for(i=0;i<7;i++)
    {
    	if(arr[i]>max)
		{
			max = arr[i];
		}
	
		if(arr[i] < min)
    	{
        	min = arr[i];
    	}
	}
	printf("highest temperature = %d\n",max);
	printf("lowest temperature = %d\n", min);
    
    //calculate the temperature range
    range = max - min;
    printf("Temperature range = %d\n", range);
    
    return 0;
}
