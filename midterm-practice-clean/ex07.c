#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//get grades between 0-100 and calculate the number of valid gardes, how many passed, how many failed, precentage of passing, and number of grades;  
	// be done when the grade 999 is eneterd. 
	
	float fail = 0; 
	float pass = 0; 
	float prec; 
	int num_grades = 0; 
	float grade;  
	while (grade != 999)
	{
		printf("enter your grade\n"); 
		scanf("%f", &grade); 
		if(grade >= 0 && grade <= 100)
		{
			if(grade > 59.4)
			{
				pass++;
				num_grades ++; 
			}
			else
			{
				fail++; 
				num_grades ++;
			}
		}
		else 
		{
			printf("invalidgrade\n"); 
		}
		 
	}
	prec = (pass/num_grades) * 100; 
	printf("the number of passes:%f\n:", pass); 
	printf("the number of fails:%f\n", fail); 
	printf("the number of grades are:%d\n", num_grades); 
	printf("precentage of passings:%f\n", prec); 
}
