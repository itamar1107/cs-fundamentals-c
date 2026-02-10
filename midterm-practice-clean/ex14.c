#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that gets a number from the user and prints its line of the multiplication table 
	int num; 
	int i = 1; 
	printf("enter a number\n"); 
	scanf("%d", &num); 
	if(num==0)
		{
			printf("invalid number\n"); 
		}
		else while(i<11)
				{
					printf("%d\t", num*i); 
					i++; 
				}
}
