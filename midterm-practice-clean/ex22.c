#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that gets 10 numbers between 1-20 and stop when their sum is over 100. use for loop
	int i; 
	int num; 
	int sum = 0; 
	for(i=0;i<100;i++)
		{
			printf("enter a number between 1-20\n"); 
			scanf("%d", &num);
			if(num>=1 && num <=20)
				{
					if(num+sum <100)
					{
						sum=sum+num; 
					}
					else
					{
						printf("the sum of your numbers is over hunderd and is:%d\n", sum+num); 
						i=11;
					}
				}
				else
				{
					printf("invalid number\n"); 
					i--;
				}
		}
}
