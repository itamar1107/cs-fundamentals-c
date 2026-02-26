#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//define the calculate the sum and product function
void calculateSumAndProduct(int *a, int *b, int *sum, int *product);
int main(int argc, char *argv[]) {
	//declare variables
	int a,b,result,sum,product; 
	//ask the user for 2 integers
	printf("enter 2 numbers\n"); 
	scanf("%d", &a); 
	scanf("%d", &b);
	//call the function sum amd product
	calculateSumAndProduct(&a,&b,&sum,&product);  

}
//declare the calaculate sum and product
void calculateSumAndProduct(int *a, int *b, int *sum, int *product)
{
	//calculate the sum and the product
	*sum = *a + *b; 
	*product = *a * *b; 
	//printing the result
	printf("the sum of the numbers are %d\n", *sum); 
	printf("the product of the numbers are %d\n", *product); 
}
