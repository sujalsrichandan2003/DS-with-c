#include<stdio.h>
int main()
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	int row = 2,colum = 3, sum = 0;
	int i,j;
	
	for (i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			sum += arr[i][j];
		}
	}
	printf("sum of element:%d\n",sum);
	return 0;
}
