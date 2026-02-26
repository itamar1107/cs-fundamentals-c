#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//create two strings
	char string [100]; 
	char string1 [100]; 
	//user enter values
	printf("enter two words\n");
	//read values for strings 
	scanf_s("%s", string, 20); 
	scanf_s("%s", string1, 20);
	//combining strings together 
	strcat(string, string1); 
	//print joined string
	printf("%s", string); 
}
