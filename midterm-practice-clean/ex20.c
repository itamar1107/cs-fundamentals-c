#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Write a programme in C that will calculate the sum of squares of the first n natural numbers using the do-while loop.
	
	//setting variables for input, sum; 
	float sum=0.0,num;  
	//ask the user to insert the number he wants
	printf("enter the number of the squres you want\n"); 
	scanf("%f", &num); 
	do
	{
		sum = sum + pow(num,2);
		num--;
	} 
	while(num >= 1); 
	printf("the sum of the squrs is:%f\n", sum); 
	
}
