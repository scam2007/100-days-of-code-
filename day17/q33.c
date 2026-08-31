//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>
int main(){
	int num,temp1,temp2,r,sum,count;
	printf("enter number : ");
	scanf("%d",&num);
	temp1 = num;
	temp2 = num;
	while (temp1!=0){
		count++;
		temp1/=10;
	}
	while (temp2!=0){
		r = temp2%10;
		sum = sum+pow(r,count);
		temp2/=10;
	}
	if (sum == num){
		printf("armstrong number\n");
	}
	else {
		printf("not an armstrong number \n");
	}
	return 0;
}







