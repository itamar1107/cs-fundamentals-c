#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade; 
	printf("please enter your grade\n");
	scanf("%d", &grade); 
	if(grade < 0 || grade >100)
		{
			while(grade < 0 || grade >100)
				{
					printf("invalid grade, try again\n"); 
					scanf("%d", &grade); 
				}
		}
		if(grade >=85)
				{
					printf("exellent");
				}
				else if(grade <85 && grade >=70)
						{
							printf("good"); 
						}
						else if(grade <70 && grade >=50)
								{
									printf("need to improve"); 
								}
								else if(grade < 50)
										{
											printf("fail"); 
										}
		
}
