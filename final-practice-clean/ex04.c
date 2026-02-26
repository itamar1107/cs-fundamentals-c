#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num, i, factor=1;  
	printf("please enter the number you would like to factor\n");	
	scanf("%d", &num); 
	if(num == 0)
		{
			printf("the factorial of %d is: %d\n", num,num);
		}
		else if(num<0)
				{
					while(num<0)
					{
						printf("not a valid number try again\n");
						scanf("%d", &num);  	
					}
				}
					if(num>0)
						{
							for(i=1; i<=num; i++)
								{
									factor = factor * i; 			
								}
								printf("the factorial of %d is: %d\n", num, factor);
						}
						
	return 0;
}
