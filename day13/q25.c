//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include <stdio.h>
int main (){
	printf("This is a calculator \n");
	int opt;
	printf("enter a number for an operation \n1 for addition\n2 for subtraction\n 3 for multiplication \n 4 for division \n 5 for modulus\n");
	scanf("%d",&opt);
	switch (opt){
		case 1 :
			printf("This is  addition : \n");
			int a,b;
			printf("please enter the numbers to be added : ");
			scanf("%d %d",&a,&b);
			printf("the sum is : %d",(a+b));
			break;
		case 2 :
			printf("This is sutraction : \n");
			int c,d;
			printf("please enter the numbers to be subtracted : ");
			scanf("%d %d",&c,&d);
			if (c>d){
				printf("the differece is : %d",(c-d));
			}else {
				printf("the differece is : %d",(c-d));
			} break;
		case 3 :
			printf("This is  multiplication : \n");
			int e,f;
			printf("please enter the numbers to be multiplied : ");
			scanf("%d %d",&e,&f);
			printf("the produc is : %d",(e*f));
			break;
		case 4 :
			printf("This is division : \n");
			int g,h;
			printf("please enter the numbers to be divided : ");
			scanf("%d %d",&g,&h);
			if (g>h){
				printf("the quotient is : %d",(g/h));
			}else {
				printf("the quotient is : %d",(g/h));
			}break;
		case 5 :
			printf("This is modulus : \n");
			int i,j;
			printf("please enter the numbers to find remainder : ");
			scanf("%d %d",&i,&j);
			if (i>j){
				printf("the remainder is : %d",(i%j));
			}else {
				printf("the remainder is : %d",(i%j));
			}break;
		default :
			printf("enter valid number");
			break;
	}
	return 0;
}
		














