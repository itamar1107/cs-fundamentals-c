#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//Write a programme in C that will calculate the factorial of an integer number n, given by the user (Use the for-loop) 
	
	//setting variables for counter, input, sum
	long int sum = 1; 
	int num; 
	int count;
	//asking the user for the number
	printf("please enter the number you need to factor\n");
	scanf("%d", &num); 
	for(count = 1; count<=num; num--)
	{
		sum = sum *num; 
	}
	printf("the sum of the factored number is:%d\n", sum); 
	return 0;
}
