/*
Name: Anvesh Malkhede
Reg no.: 22030112
Dept: Information Technology
Batch 7
*/

#include <stdio.h>

void findLargestNumberAmongFive() {
    int a, b, c, d, e;
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int largest = a;
    if(b > largest) largest = b;
    if(c > largest) largest = c;
    if(d > largest) largest = d;
    if(e > largest) largest = e;
    printf("The largest number is: %d\n", largest);
}

void findSmallestNumberAmongFour() {
    int a, b, c, d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int smallest = a;
    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;
    if(d < smallest) smallest = d;
    printf("The smallest number is: %d\n", smallest);
}

void checkPassFailForThreePapers() {
    int mark1, mark2, mark3;
    printf("Enter marks for three papers: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    if(mark1 < 45 || mark2 < 45 || mark3 < 45) {
        printf("Fail\n");
    } else {
        printf("Pass\n");
    }
}

void checkAdmissionEligibility() {
    int mark1, mark2, mark3;
    printf("Enter marks for three papers: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    int total = mark1 + mark2 + mark3;
    float percentage = total / 3.0;
    printf("Total: %d, Percentage: %.2f\n", total, percentage);
    if(percentage >= 82) {
        printf("Student can take admission.\n");
    } else {
        printf("Student can't take admission.\n");
    }
}

void assignGrade() {
    int mark1, mark2, mark3, mark4;
    printf("Enter marks for four papers: ");
    scanf("%d %d %d %d", &mark1, &mark2, &mark3, &mark4);
    int total = mark1 + mark2 + mark3 + mark4;
    float percentage = total / 4.0;
    printf("Total: %d, Percentage: %.2f\n", total, percentage);
    if(percentage >= 90) {
        printf("Grade A\n");
    } else if(percentage >= 80) {
        printf("Grade B\n");
    } else if(percentage >= 70) {
        printf("Grade C\n");
    } else if(percentage >= 60) {
        printf("Grade D\n");
    } else if(percentage >= 40) {
        printf("Grade E\n");
    } else {
        printf("Fail\n");
    }
}

void checkVowel() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to consume any trailing newline
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }
}

int main() {
    printf("Task 1:\n");
    findLargestNumberAmongFive();
    findSmallestNumberAmongFour();
    
    printf("\nTask 2:\n");
    checkPassFailForThreePapers();
    checkAdmissionEligibility();
    
    printf("\nTask 3:\n");
    assignGrade();
    
    printf("\nTask 4:\n");
    checkVowel();
    
    return 0;
}
