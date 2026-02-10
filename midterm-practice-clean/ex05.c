#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//create a christmass tree out of @
		int rows=5;
		int i; 
		int j; 
		int n;
		for(i=1; i<=rows; i++)
		{
			for(j=1; j<=rows-i; j++)
			{
				printf(" "); 
			}
			for(j=1;j<=(2*i-1);j++)
			{
					printf("@");
			}
		printf("\n"); 
		}
		i=0; 
		j=0; 
		for(i>=0; i<=4; i++)
			{
				for(j>=0; j<=3; j++)
					{
						for(n>0;n<=1;n++)
							{
								printf(" "); 
							}	
							printf("@"); 
					}
				n=0;	
				j=0; 
				printf("\n"); 
			}

		
				
				
	

	return 0;
}
