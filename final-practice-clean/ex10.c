#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int *find_max(int *arr, int size); 
int main(int argc, char *argv[]) {
	
	int i,mainSize; 
	printf("please enter the size of the array\n");
	scanf("%d", &mainSize); 
	int mainArray[mainSize]; 
	for(i=0;i<mainSize;i++)
		{
			printf("enter the %d number\n", i); 
			scanf("%d", &mainArray[i]); 
		}
		int *mainMax = find_max(mainArray, mainSize); 
		printf("the maximum value in the array is: %d\n", *mainMax);
		printf("the memory address is: %d", &mainMax);  
}
int *find_max(int *arr, int size)
{
	int i;
	int *max=arr; 
	for(i=0;i<size;i++)
	{
		if(arr[i] > *max)
		{
			max = &arr[i]; 	
		}
	}
	return max; 
}
