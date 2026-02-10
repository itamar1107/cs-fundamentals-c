#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//user enter three numbers, prints the avarage while maintaing sum using do while
	
	//setting variables
	float sum; 
	int count = 1; 
	int num;
	float avarage; 
	//setting loop (asking or number, putting it into num, creating the sum and counting)
	do
	{ 
		printf("enter a number\n"); 
		scanf("%d", &num);
		if(num <=0 )
		{
			printf("the number is not valid\n");
		}
		else
		{
		sum = sum + num;  
		count++;
		}
	}
	while(count <=3 ); 
	//calculating the avarage and printing the results
	avarage = sum / 3; 
	printf("the sum of the numbers is:%f\n", sum); 
	printf("the avarage is:%f\n", avarage); 
	
	
	return 0;
}
