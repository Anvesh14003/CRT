#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

bool isPalindrome(char *s) {
    int left = 0, right = strlen(s) - 1;
    while (left < right) {
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str)) {
        printf("true\n");
    } else {
        printf("false\n");
    }
    return 0;
}
/* 
output
Enter a string: Kanak
true

Enter a string: Kapil
false

*/