#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//define the function
int count_vowels(char *str);
int main(int argc, char *argv[]) {
	//creting a string 
	char string[100]; 
	//asking the user for a string and reading it
	printf("enter a string\n");
	scanf_s("%s", string, 99); 
	//calling the count vowels function and storing the result in maincount
	int mainCount = count_vowels(string); 
	//printing result
	printf("%d", mainCount);  
}
int count_vowels(char *str)
{
	//setting values for counters
	int i,j, count; 
	//checking length of the users string
	int len = strlen(str); 
	//creating a string for vowels and checking its length
	char v[11]="aeuioAOUEI";
	int lenv = strlen(v);  
	//checking how many vowels there are in the users string
	for(i=0; i<len; i++)
		{
			for(j=0; j<lenv; j++)
				{
					if(str[i] == v[j])
						{
							count++; 
						}
				}
		}
		//returning result for main
		return count; 
}
