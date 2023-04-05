#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int get_num(char** str) {
    int num = 0;
    while (isdigit(**str)) {
        num = num * 10 + (**str - '0');
        (*str)++;
    }
    return num;
}

int calculate_term(char** str) {
    int num1 = get_num(str);
    while (**str) {
        if (**str == '*') {
            (*str)++;
            int num2 = get_num(str);
            num1 *= num2;
        } else if (**str == '/') {
            (*str)++;
            int num2 = get_num(str);
            num1 /= num2;
        } else {
            break;
        }
    }
    return num1;
}

int calculate(char** str) {
    int num1 = calculate_term(str);
    while (**str) {
        if (**str == '+') {
            (*str)++;
            int num2 = calculate_term(str);
            num1 += num2;
        } else if (**str == '-') {
            (*str)++;
            int num2 = calculate_term(str);
            num1 -= num2;
        } else {
            break;
        }
    }
    return num1;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("ERROR: Invalid number of arguments\n");
        exit(1);
    }

    char* expression = argv[1];
    int result = calculate(&expression);
    printf("RESULT: %d\n", result);
    return 0;
}
