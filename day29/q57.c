//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/
#include <stdio.h>

int main ()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n],sum=0;
	printf("enter the array elements : ");
	for (int i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		sum += arr[i];
	}
	printf("The sum of the elements of the array is %d",sum);
	return 0;
}












