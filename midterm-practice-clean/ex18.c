#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//creates a right triangle of @
	int row =1; 
	int col=1; 
	for(col>=1; col<=5; col++)
	{
		for(row>=1;row<=5;row++)
		{
			if(row<=col)
				{
					printf("@ "); 
				}
				else
				{
					break;
				} 
		}
		row=1; 
		printf("\n");
	}
	
}
