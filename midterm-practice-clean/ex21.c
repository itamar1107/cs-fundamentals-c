#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//calculating the sum of the digit that makes the number entered by the user
	int num,num1, num2,sum,numdig;
	printf("enter a number\n"); 
	scanf("%d", &num); 
	while(num  >=1)
		{
			sum = sum + (num%10);
			num = num/10;  
		}
	
		printf("the sum of the digits is:%d", sum);
		
	return 0;
}
