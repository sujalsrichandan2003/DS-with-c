#include<stdio.h>
int main()
{
	int arr[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	for(i=0;i<2;i++)
	{
		for (j=0; j<3; j++)
		{ 
	  		printf("Elements are[%d][%d]= %d\n",i,j,arr[i][j]);
    	}
	}
    return 0;
}
 	

