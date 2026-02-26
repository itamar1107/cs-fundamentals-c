#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int count_occurrences(char *str, char ch); 
char *find_character(char *str, char ch); 
int main(int argc, char *argv[]) {
	
	int length; 
	printf("enter the size of the array\n"); 
	scanf("%d",&length); 
	while(length > 100)
		{
			printf("not valid input, try again\n"); 
			scanf("%d", &length);
		}
	char string[length+1]; 
	int i; 
	printf("enter a string\n"); 
	scanf_s("%s", string, length); 
	char c; 
	printf("enter the char you want to find\n"); 
	scanf(" %c",&c);
	int numberOfTime = count_occurrences(string,c);
	char *where = find_character(string,c); 
	printf("the character %c is appearing %d times\n",c,numberOfTime); 
	printf("address: %p\n", (void*)where);

	
}
int count_occurrences(char *str, char ch)
{
	int size = strlen(str); 
	int i, count=0; 
	for(i=0; i<size; i++)
		{
			if(str[i] == ch)
				{
					count++; 
				}
		}
		return count; 
}
char *find_character(char *str, char ch)
{
	int i;
	int len = strlen(str); 
	for(i=0;i<len;i++)
	{
		if(str[i] == ch)
			{
				return &str[i]; 		 
			}
		
	} 
}
