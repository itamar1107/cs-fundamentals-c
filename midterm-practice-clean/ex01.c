#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that will give a squre of @ 
	char a = '@'; 
	int col = 0; 
	int row = 0; 
	for(col >=0; col<=3;col++)
		{
			for(row>=0;row<=3;row++)
				{
					printf("%c ", a); 
				}
				row=0; 
				printf("\n"); 
		}
	return 0;
}
