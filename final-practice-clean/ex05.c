#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//defining the calculate_stats function
void calculate_stats(int *arr, int size, int *min, int *max, float *avg);
int main(int argc, char *argv[]) {
	
	//define array size, min, max and average
	int mainSize, mainMin, mainMax;
	float mainAvg;  
	//setting size by the user
	printf("enter the array size\n"); 
	scanf("%d", &mainSize); 
	//declaring an array and filling it by the user
	int mainArray[mainSize]; 
	int i; 
	for(i=0;i<mainSize;i++)
		{
			printf("enter the value of the %d place\n", i); 
			scanf("%d", &mainArray[i]); 
		}
		calculate_stats(mainArray, mainSize, &mainMin, &mainMax, &mainAvg);
	
}
//defining the calcultae stats function
void calculate_stats(int *arr, int size, int *min, int *max, float *avg)
{
	arr[size]; 
	*min = arr[0]; 
	int i, sum=0; 
	for(i=0;i<size;i++)
		{
			if(arr[i] < *min)
				{
					*min = arr[i];  
				}
		}
		*max = arr[0]; 
		for(i=0;i<size;i++)
			{
				if(arr[i] > *max)
					{
						*max = arr[i]; 
					}
			}
		for(i=0; i<size; i++)
			{
				sum = sum + arr[i]; 	
			}
			*avg = (float)sum/size; 
			printf("min = %d\n", *min); 
			printf("max = %d\n", *max); 
			printf("average = %.1f\n", *avg); 
}
