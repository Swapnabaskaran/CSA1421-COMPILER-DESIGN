#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter input (# to stop): ");
    while((ch=getchar())!='#') {
        if(isalpha(ch)) printf("Identifier\n");
        else if(isdigit(ch)) printf("Constant\n");
        else if(ch=='+'||ch=='-'||ch=='*'||ch=='/') printf("Operator\n");
    }
    return 0;
}

