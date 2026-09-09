//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main ()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements to enter \n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count_even=0,count_odd=0;
	for (int i=0;i<n;i++)
	{	
		if (arr[i]%2==0)
		{
			count_even += 1;
		} 
		else 
		{
			count_odd += 1;
		}
	}
	printf("EVEN = %d, ODD = %d \n",count_even,count_odd);
	return 0;
}	
	














