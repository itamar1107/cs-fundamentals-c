#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int size, i, count = 0;

    printf("enter the max size of the string\n");
    scanf("%d", &size);

    if (size <= 0) {
        printf("invalid size\n");
        return 1;
    }

    // +1 for '\0'
    char string[size + 1];

    printf("enter the string\n");
    scanf("%s", string);   // reads up to whitespace

    int len = strlen(string);

    for (i = 0; i < len; i++) {
        if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' ||
            string[i] == 'o' || string[i] == 'u' ||
            string[i] == 'A' || string[i] == 'E' || string[i] == 'I' ||
            string[i] == 'O' || string[i] == 'U') {
            count++;
        }
    }

    printf("the amount of vowels in your word is: %d\n", count);

    return 0;
}
