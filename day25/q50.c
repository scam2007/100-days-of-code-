/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/
#include <stdio.h>

int main(){
	int i,j,n;
	printf("enter how many rows to print : ");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		for (j=1;j<=n;j++){
			if (i>j){
				printf(" ");
			}
			else {
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
