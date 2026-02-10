#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Write a programme in C that will produce the first n Fibonacci numbers using the while loop
	
	//setting varibales for first two numbers, a sum,input and counter
	int num,sum;
	int f1 =0; 
	int f2 = 1; 
	int count = 2; 
	//ask the user for number of numbers he needs
	printf("enter the number of fibonacci numbers you need\n"); 
	scanf("%d", &num); 
	//check if the user asked for more then 2 numbers 
	if(num <2)
		{
			printf("enter a number that is greater than 2"); 
		}
		else//printing the first two numbers
		{
			printf("%d\t%d\t", f1, f2); 
		}
		while(count < num) //printing the rest of the numbers
			{
				sum = f1+ f2; 
				printf("%d\t", sum); 
				f1 = f2; 
				f2 = sum; 
				count++; 
			}

}
