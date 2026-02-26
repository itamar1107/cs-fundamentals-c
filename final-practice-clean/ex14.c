#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//declaring variables for size and counter
	int size, i; 
	//asking the user for the size of the string and reading it 
	printf("enter the size of the string\n"); 
	scanf("%d", &size); 
	//creating a string with the size the user choose, and asking the user to insert the string
	char string[size]; 
	
	printf("enter the string\n");
	scanf_s("%s", string, size);
	//figuring out the length of the array
	int len = strlen(string);  
	//swapping the characters 
	for(i=0; i<len/2 ;i++)
	{
		char temp = string[i]; 
		string[i] = string[len-1-i];
		string[len-1-i] = temp;  	
	} 
	//printing the reversed array
	printf("%s", string); 
}
