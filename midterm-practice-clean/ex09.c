#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//a program that calculates the factoial of a number give by the user 
	int num,i;
	int sum =1; 
	printf("enter a number\n"); 
	scanf("%d", &num); 
	for(i=1;i<=num;i++)
		{
			sum = sum * i;
		}
		printf("the factorial of the number you entered is:%d", sum); 
	return 0;
}
