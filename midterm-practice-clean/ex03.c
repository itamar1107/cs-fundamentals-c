#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 
	//ask for three numbers and return the avarage of their sum using while loop 
	
	// setting variables for sum, avarage, input number and count
	float sum = 0.0;
	float avarage=0.0; 
	int num; 
	int count = 1; 
	while (count <= 3)
		{
			printf("please enter a number\n");
			scanf("%d", &num);
			if(num>0)
			{
				sum=sum+num; 
				count++;
			}
 			else
 			{
 			printf("wrong value try again"); 	
			}
			
		}
		printf("the sum of the three numbers is:%f\n", sum); 
		avarage = sum/3; 
		printf("the avarage of the three numbers is:%f\n", avarage);
	
}
