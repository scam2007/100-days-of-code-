//Q27: Write a program to print the sum of the first n odd numbers.

/*
Sample Test Cases:
Input 1:
3
Output 1:
9

Input 2:
5
Output 2:
25

*/
#include <stdio.h>
int main (){
	int x,i,s;
	printf("enter the value of n : \n");
	scanf("%d",&x);
	for (i=1;i<=(2*x-1);i+=2){
		s = s+i;
	}
	printf("the sum of first n odd numbers is : %d",s); 
	return 0;
}
