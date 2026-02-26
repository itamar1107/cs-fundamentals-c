#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//definig the swap elements function
void swap_elements(int *a, int *b); 
//define the reverse array function
void reverse_array(int *arr, int size);
int main(int argc, char *argv[]) {
	int i,size; 
	printf("enter the array size\n");
	scanf("%d", &size);          
	while (size > 100)
		{
			printf("invalid size, try again\n");
			scanf("%d", &size); 
		}
	int array[size]; 
	for(i=0;i<size;i++)
		{
			printf("enter the %d value\n", i); 
			scanf("%d", &array[i]); 
		}
	reverse_array(array,size); 
		  
}
void swap_elements(int *a, int *b)
{
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}
void reverse_array(int *arr, int size)
{
	int temp, i;
	for(i=0; i<(size/2)+(size%2); i++)
		{
			swap_elements(&arr[i],&arr[size-1-i]);	
		} 
		for(i=0; i<size; i++)
		{
			printf("%d ", arr[i]); 
		}
}
