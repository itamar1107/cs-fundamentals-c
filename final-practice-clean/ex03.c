#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//create two strings
	char string[100]; 
	char string1[100];
	//ask the user for two strings and read themr
	printf("enter two strings\n"); 
	scanf_s("%s", string, 100); 
	scanf_s("%s", string1, 100); 
	//decralre a counter and check the length of the strings
	int i =0; 
	int len = strlen(string); 
	int len1= strlen(string1); 
	//checking id the lengths are equal
	if(len != len1)
		{
			printf("not equals\n"); 
		}
		else
		{//checking if the strings are equal
			for(i=0; i<len; i++)
				{
					if(string[i] != string1[i])
						{
							printf("not equals\n"); 
							break; 
						}
				}
		}
		//print that the strings are equal
		if(i==len)
			{
				printf("equals\n"); 
			}
}
