//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include <stdio.h>
int main(){
	printf("This program gives sum of first n natural number \n");
	int x;
	printf("Enter the value of n \n");
	scanf("%d",&x);
	printf("The sum of first %d natural numbers is %d",x,(x*(x+1))/2);
	return 0; 
}


















