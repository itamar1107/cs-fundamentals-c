#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//defining the fucntion  calculating average
double calculateAvergae(int numbers[], int size); 
int main(int argc, char *argv[]) {
	
	//declaring a size for the array and a counter
	int arraySize, i; 
	//asking the user for the array size
	printf("enter the amount of numbers you would like to enter\n");
	scanf("%d", &arraySize); 
	int array[arraySize]; 
	//filling the array with values
	for(i = 0; i<arraySize; i++)
	{
		printf("enter a number\n"); 
		scanf("%d", &array[i]); 
	}
	//calling the calaculateavarge function
	double avg = calculateAvergae(array,arraySize); 
	printf("the average of the array is: %f", avg); 

}
//declaring the function calculate average
double calculateAvergae(int numbers[], int size)
{
		//declaring a sum and a counter
		int sum = 0; 
		int i; 
		//calculating the sum of the array
		for(i=0; i<size;i++)
			{
				sum = sum + numbers[i]; 
			}
			//calculating and returning the average
			double average = (double)sum/size; 
			return average; 
} 

