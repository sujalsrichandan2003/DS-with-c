#include<stdio.h>
int main()
{
	int scores[20]={85,78,92,65,89,76,94,81,87,90,72,88,95,79,83,91,70,84,86,93};
	int sum=0,count=20, average=0;
	int i;
	
	//calculate the average score annd highest score achieved.
	for (i=0;i<count;i++)
	{
		sum += scores[i];
		//average = sum/count;
		//printf("The average is %d",average);
	}
	
	if (count>0)
	{
		average = sum/count;
		printf("The average is %d",average);
	}
	
	//Count the number of students who passed and the number of students who failed. 
	
	//Determine the grade distribution, i.e., count the number of students falling into different grade ranges (e.g., O, E, A, B, F)
	int grades[5] = {0};
	for (i = 0; i < count; i++)
    {
        if (scores[i] >= 90)
        {
            grades[0]++; // O grade
            //printf("O: %d\n", grades[0]);
        }
        else if (scores[i] >= 80)
        {
            grades[1]++; // E grade
            //printf("E: %d\n", grades[1]);
        }
        else if (scores[i] >= 70)
        {
            grades[2]++; // A grade
            //printf("A: %d\n", grades[2]);
        }
        else if (scores[i] >= 60)
        {
            grades[3]++; // B grade
            //printf("B: %d\n", grades[3]);
        }
        else
        {
            grades[4]++; // F grade
            //printf("F: %d\n", grades[4]);
        }
	}
    printf("O: %d\n", grades[0]);
    printf("E: %d\n", grades[1]);
    printf("A: %d\n", grades[2]);
    printf("B: %d\n", grades[3]);
    printf("F: %d\n", grades[4]);
	return 0;
}
