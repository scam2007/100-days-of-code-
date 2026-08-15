//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include <stdio.h>
int main (){
	printf("This program converts temprature from celcius to fahrenheit \n");
	float c;
	printf("Enter temprature (in celcius) : \n");
	scanf("%f",&c);
	printf("The temp in fahrenheit is : %f",c*(9/5)+32);
	return 0;
}
