//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include <stdio.h>
#include <math.h>
int main () {
 int a,b,c,d;
 float x,y ;
 printf("Enter a,b,c one by one \n");
 scanf("%d %d %d" ,&a ,&b ,&c);
 x = (-b + sqrt(b*b-4*a*c))/(2*a);
 y = (-b - sqrt(b*b-4*a*c))/(2*a);
 printf("The roots are %f and %f \n" ,x ,y);
 d = b*b -4*a*c ;
 if (d > 0) {
    printf("Roots are real and distinct") ;
 } else if (d < 0 ) {
    printf("Roots are imaginary") ;

 } else {
    printf("Roots are real and equal");
 }
 
 return 0;
}















