//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

/*
Sample Test Cases:
Input 1:
A
Output 1:
Uppercase alphabet

Input 2:
a
Output 2:
Lowercase alphabet

Input 3:
3
Output 3:
Digit

Input 4:
#
Output 4:
Special character

*/
#include <stdio.h>
int main(){
	printf("This program checks for if entered entity is letter digit or special characted \n");
	char x;
	printf("please enter a number : ");
	scanf("%c",&x);
	if (x >= 'a' && x <= 'z')
		printf("This is a lower case letter");
	else if (x >= 'A' && x <= 'Z')
		printf("This is an upper case letter");
	else if (x >= '0' && x <= '9')
		printf("This is a digit");
	else 
		printf("This is a special character");
	return 0;
}









