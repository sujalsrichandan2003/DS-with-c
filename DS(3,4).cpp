#include<stdio.h>
int fact(int);
int main()
{
	int num=3, result;
	result = fact(num);
	printf(" factorial is %d",num, result);
}
int fact(int num)
{
	if (num==0)
	{
	return 1;
	}	
	else
	{
		return num*fact(num-1);
	}
}
