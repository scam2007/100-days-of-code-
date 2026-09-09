//Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/
#include <stdio.h>

int main ()
{
	int n,i,count_plus,count_minus,count_zero;
	int arr[n];
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("enter the elemts of the array : \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i] > 0)
		{
			count_plus += 1;
		}
		else if (arr[i] < 0)
		{
			count_minus += 1;
		}
		else 
		{
			count_zero += 1;
		}
	}
	printf("positive : %d \nnegetive : %d \nzero : %d \n",count_plus,count_minus,count_zero);
	return 0;
}











