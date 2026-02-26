#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the concatenateStrings function
void concatenateStrings(char* str1, const char* str2);

int main(int argc, char *argv[]) {
    // creating three strings
    char mainString[100]; 
    char mainString1[100];
    char mainString2[200];   // bigger to hold concatenation

    // asking the user to fill two strings
    printf("please enter two strings\n"); 
    scanf("%99s", mainString); 
    scanf("%99s", mainString1); 

    // copy the first string into the third
    strcpy(mainString2, mainString);  

    // connecting the third and second strings
    concatenateStrings(mainString2, mainString1); 

    // print the joined string
    printf("concatenated string: %s\n", mainString2); 

    // checking which string comes first in the dictionary
    int cmp = strcmp(mainString, mainString1);

    if (cmp < 0) {
        printf("the string \"%s\" comes before \"%s\"\n", mainString, mainString1);
    } 
    else if (cmp > 0) {
        printf("the string \"%s\" comes before \"%s\"\n", mainString1, mainString);
    } 
    else {
        printf("the two strings are equal\n");
    }

    return 0;
}

// concatenate function
void concatenateStrings(char* str1, const char* str2)
{
    strcat(str1, str2); 
}
