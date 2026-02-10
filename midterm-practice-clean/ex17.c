#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that check if the number is positive or negative and if it odd or even 
	int num; 
	printf("enter a number\n"); 
	scanf("%d", &num); 
	if(num>0)
		{
			if(num%2!=0)
				{
					printf("the number is positive and odd"); 
				}
				else
				{
					printf("the number is positive and even"); 
				}
				
		}
	else if(num<0){
	if(num%2!=0)
			{
				printf("the number is negative and odd"); 
			}
			else
			{
				printf("the number is negative and even"); 
			}
		}
		if(num == 0)
			{
				printf("the number is 0"); 
			}
	return 0;
}
