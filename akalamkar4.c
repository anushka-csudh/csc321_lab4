/* Name: Anushka Kalamkar
Student ID: 213022136
CSC321 Lab04 */

#include <stdio.h>
#include<stdlib.h>

int main() {
    // Varibales with 4 different data types
    int a;
    float b;
    char c;
    double d;

    // User input values
    printf("Enter an integer value: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a character: ");
    scanf(" %c", &c);

    printf("Enter a double value: ");
    scanf("%lf", &d);

    // Conditional checks and their results are displayed
    if (a != 0 && a > 1) {
        printf("Integer value is greater than 1\n");
    } else if(a > 1 && a < 10) {
        printf("Integer you entered lies between 2 - 9\n");
    } 
    else {
        printf("Integer you entered is greater than 5\n");
    }

    if (b < 15.0) {
        printf("Float value is less than 15.0.\n");
    } else {
        printf("Float value is greater than 15.0.\n");
    }

    if (c != 't') {
        printf("Character does not equal the letter 't'.\n");
    } else {
        printf("Character equals the letter 't'.\n");
    }

    if (d == 10.5) {
        printf("Double variable equals 10.5.\n");
    } else {
        printf("Double variable does not equal 10.5.\n");
    }

    return 0;
}

