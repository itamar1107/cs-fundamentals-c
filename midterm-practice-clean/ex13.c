#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//program that print all the numbers between 0-100 exept those that divides by 2,3,5,7
	int i; 
		for(i>=0; i<100; i++)
	{
		if(i%2==0 || i%3==0 || i%5==0 || i%7==0)
			{
				continue; 
			}
			else
			{
				printf("%d\n", i); 
			}	
	}
	return 0;
}
