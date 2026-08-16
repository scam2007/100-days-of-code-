//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

/*
Sample Test Cases:
Input 1:
a
Output 1:
Vowel

Input 2:
b
Output 2:
Consonant

*/
#include <stdio.h>
int main(){
	printf("this program check for a vowel or consonant");
	char x;
	printf("enter a letter : ");
	scanf("%s",&x);
	if (x=='a'|| x=='e'|| x=='i'|| x=='o'||x=='u') 
		printf("vowel");
	else 
		printf("consonant");
	return 0;
}















