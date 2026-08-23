//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include <stdio.h>
int main(){
	printf("This program tells the type of a triangle on the basis of its sides : \n");
	int a,b,c;
	printf("enter the sides a b and c");
	scanf("%d %d %d",&a,&b,&c);
	if (a==b==c){
	printf("This is an eqilateral triangle");
	}else if (a==b || b==c || c==a){
		printf("This is an isoceles triangle");
	}else {
		printf("This is a scalen triangle \n");
	}
	return 0;
}













