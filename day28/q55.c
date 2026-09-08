//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include <stdio.h>

int main (){
	int j,n,i;
	printf("Enter enter the number uptill prime nums to display : ");
	scanf("%d",&n);
	for (i=n;i>=2;i--){
		int c=0;
		for (j=i-1;j>1;j--){
			if (i%j==0){
				c++;
			}
		}
		if (c==0){
			printf("%d ",i);
		}
	}
	return 0;
}











