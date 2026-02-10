#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//getting numbers and figuring out things about them 
	
	// setting an integer for the two numbers 
	int first,second;  
	// asking the user to give a number higher than 31234
	printf("please insert a number higher then 31234\n"); 
	scanf("%d", &first);
	//checking if the number is valid 
	if(first <= 31234)
	{
		printf("invalid number\n");
	}
	// checking if the number is even or odd  and if it divides with 17
	else if(first%2 == 0 && first%17 == 0)
		{
			printf("your number is even and divids with 17\n"); 
		}
		else if(first%17==0)
			{
				printf("your number is odd and divids with 17\n"); 
			}
			else if(first%2==0)
				{
					printf("your number is even and does not divid with 17\n");
				}
				else
				{
					printf("your number is odd and does not divid with 17\n");
				}
				
				//asking for second number between 56 and 66
				printf("please insert an number in the range of 56-66\n");
				scanf("%d", &second);
				int rem = first % second;
				//checking if the number is valid 
				if(second < 56 && second > 66)
				{
					printf("invalid number\n"); 
				}
				else if(rem == 0)
					{
						printf("the first and second numbers divid\n"); 
					}
					else
					printf("%d", rem); 
			
		
		
		
		
	return 0;
}
