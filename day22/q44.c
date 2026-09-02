//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main(){
	float n,i;
	float sum=1;
	printf("Enter number of terms : ");
	scanf("%f",&n);
	if (n==1){
		printf("The sum is 1 \n");
	}
	else {
		for (i=2;i<=n;i++){
			sum = sum + ((2*i-1)/(2*i));
			}
	}
	printf("The sum is %f \n",sum);
	return 0;
}











