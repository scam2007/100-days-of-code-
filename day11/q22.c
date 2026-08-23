//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main(){
	printf("This program finds the profit or loss percent by sp and cp : \n");
	float sp, cp;
	printf("enter the cp first and then sp : ");
	scanf("%f %f",&cp,&sp);
	if (sp>cp){
		printf("there is a profit of %f",(((sp-cp)/cp)*100));
		printf(" percent \n");
	}
	else if (cp>sp){
		printf("There is a loss of %f",(((cp-sp)/cp)*100));
		printf(" percent \n");
	}
	else{
		printf("there is no profit or loss \n");
	}
	return 0;
}











