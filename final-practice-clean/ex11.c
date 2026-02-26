#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//defining the min max function
void findMinMax(int arr[], int size, int *min, int *max);
int main(int argc, char *argv[]) {
	
	int mainSize;
	int min =0; 
	int max = 0;  	
	printf("please enter the array size\n"); 
	scanf("%d", &mainSize); 
	int mainArray[mainSize];
	int i; 
	for(i=0; i<mainSize; i++)
		{
			printf("enter the value in the %d place\n", i); 
			scanf("%d", &mainArray[i]);
		}
		findMinMax(mainArray, mainSize, &min, &max); 
}
//declaring the min max function
void findMinMax(int arr[], int size, int *min, int *max)
{
		arr[size]; 
		*min = arr[0]; 
		*max = arr[0];
		int i;
		for(i=0;i<size;i++)
			{
				if(arr[i] < *min)
					{
						*min = arr[i]; 
					}
			}
			for(i=0;i<size;i++)
				{
					if(arr[i] > *max)
					{
						*max = arr[i];
					}
				}
				printf("the minimum is: %d\n" , *min); 
				printf("the maximum is: %d\n" , *max); 
}

