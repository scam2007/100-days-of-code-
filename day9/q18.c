//Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include <stdio.h>
int main(){
	printf("This program assigns grades on the basis of percentage \n");
	float x;
	printf("enter your percentage : ");
	scanf("%f",&x);
	if (x>=90 && x<=100){
		printf("GRADE A");
	}
	else if(x>=80 && x<=89){
		printf("GRADE B");
	}
	else if(x>=70 && x<=79){
		printf("GRADE C");
	}
	else if(x>=60 && x<=69){
		printf("GRADE D");
	}
	else{
		printf("FAILLLLL \n");
	}
	return 0;
}













