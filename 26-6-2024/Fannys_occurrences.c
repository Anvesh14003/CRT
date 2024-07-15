#include <stdio.h>
#include <string.h>

void removeCharacter(char *str, char ch) {
    int i, j = 0;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        if (str[i] != ch) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main() {
    char str[] = "welcome to india";
    char ch = 'i';
    removeCharacter(str, ch);
    printf("Output: %s\n", str);
    return 0;
}

/* 
output
welcome to nda

*/