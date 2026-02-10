#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		//the user give a letter, the program figuers out if its a vowel or a constant
		char let; 
		printf("enter a letter\n");
		scanf("%c", &let);
		if(let == 'a' || let == 'e' || let == 'o' || let == 'u' || let == 'i' || let == 'A' || let == 'E' || let == 'U' || let == 'O' || let == 'I')
			{
				printf("vowel"); 
				
			}
			else 
			{
				printf("constant"); 
			}
	return 0;
}
