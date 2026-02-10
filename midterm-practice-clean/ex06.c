#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//checks grades from 0 to 100, stops when grade is 999, print number of fails, number pf passes, number of grades and precantage of passing
	// using do while 
	
	//setting variables 
	float pass; 
	float fail; 
	int num_grades; 
	float prec; 
	float grade; 
	do
	{
		printf("enter your grade\n"); //user inputs grade
		scanf("%f", &grade); 
		if(grade >=0 && grade <=100) //checkuing if grade is valid 
		{
			num_grades++;
			if(grade > 59.4)
			{
				pass++; 
			}
			else
			{
				fail++; 
			}
		}
		else
		{
			printf("invaild garde\n");
		}
	}
	while(grade!=999); 
	prec = (pass/num_grades) *100; 
	printf("number of pass%f\n ", pass); 
	printf("number of fail%f\n ", fail);
	printf("number of grades is:%d\n", num_grades); 
	printf("precentage of passings :%f\n", prec); 
}
