#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//get a grade between 0-100 and print the letter this grade is worth
			
	// setting varibale for the grade 
	int grade;
	
	//ask the user for the garde 
	printf("please insert your grade\n"); 
	scanf("%d", &grade); 
	// figuring out which letter the grade was
	 if(grade >= 0 && grade <= 59)
	 	{
	 		printf("F"); 
		}
		else if(grade >=60 && grade <=69)
			{
				printf("D"); 
			}
			else if(grade >=70 && grade <= 79)
				{
					printf("C"); 
				}
				else if(grade >=80 && grade <=89)
					{
						printf("B"); 
					}
					else if(grade >=90 && grade <=100)
						{
							printf("A");
						}
						else
						{
							printf("invalid grade"); 
						}
	
	return 0;
}
