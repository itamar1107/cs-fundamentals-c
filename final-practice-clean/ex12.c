#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char string[100];   // fixed max size
    int i;

    printf("enter the word\n");
    scanf("%99s", string);   // safe input

    int len = strlen(string);

    for (i = 0; i < len / 2; i++) {
        if (string[i] != string[len - i - 1]) {
            printf("not a palindrome\n");
            return 0;
        }
    }

    printf("palindrome\n");
    return 0;
}
