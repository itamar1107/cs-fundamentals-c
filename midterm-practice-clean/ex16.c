#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Write a programme in C that will produce the first n odd numbers, where n is given by the user.
	
	//setting variables for input(num), and output(num1) and a counter. 
	int num,num1,count;  
	//ask the user for his number
	printf("please enter the number of odd numbers you need\n"); 
	scanf("%d", &num); 
	for(count = 1; count <= num; count++)
		{
			printf("%d\n", count*2-1); 
		}

}
