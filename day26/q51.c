/*Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
    5
   45
  345
 2345
12345

*/
#include <stdio.h>

int main(){
	int i,j,n;
	printf("enter how many rows to print : ");
	scanf("%d",&n);
	for (i=n;i>=1;i--){
		for (j=1;j<=n;j++){
			if (i<=j){
				printf("%d",j);
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
