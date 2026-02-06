#include <stdio.h>

int main() {
    char s[50];

    printf("Enter a line: ");
    fgets(s, sizeof(s), stdin);

    if (s[0] == '/' && s[1] == '/')
        printf("Single line comment");
    else if (s[0] == '/' && s[1] == '*')
        printf("Multi line comment");
    else
        printf("Not a comment");

    return 0;
}

