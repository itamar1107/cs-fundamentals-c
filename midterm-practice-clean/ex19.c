#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// calculating the end salary of an employee after bonuses 
	
	// setting a variable for base salary, and for totalsales
	float salary = 1000.00; 
	float endsalary; 
	float totalsale; 
	// asking the user to insert his total sales 
	printf("please insert your total sales\n"); 
	scanf("%f", &totalsale); 
	
	// figuring out the amount of sales and calculting the bonus
		if(totalsale <=salary)
			{
				printf("you do not qulify for bonus\n"); 
			}
			else if(totalsale >=1001 && totalsale <=2000)
				{
					endsalary = salary * 1.05; 
					printf("your end salary is %.2f\n", endsalary); 	
				} 
				else if(totalsale >=2001 && totalsale <=3000)
				{
					endsalary = salary * 1.09;
					printf("your end salary is %.2f\n" , endsalary);
				}
				else 
					{
						endsalary = salary * 1.12; 
						printf("your end salary is %.2f\n", endsalary); 
					}
					
	return 0;
}
