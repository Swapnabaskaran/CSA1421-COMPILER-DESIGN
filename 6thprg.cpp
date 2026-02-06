#include <stdio.h>
#include <ctype.h>

int main() {
    char id[20];
    int i, valid = 1;

    scanf("%19s", id);

    if (!isalpha(id[0]) && id[0] != '_')
        valid = 0;

    for (i = 1; id[i] && valid; i++)
        if (!isalnum(id[i]) && id[i] != '_')
            valid = 0;

    printf(valid ? "Valid Identifier" : "Invalid Identifier");
    return 0;
}

