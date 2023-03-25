#include <stdlib.h>
#include <string.h>
#include <stdio.h>

const char* operators = "+-*/()%%^";


//
double add(double num, char* next) {

}

int getType(char c)
{
    if (c >= '0' && c <= '9') {return 1;}
    else if (strchr(operators, c) != NULL) {return 2;}
    return 0;
}



int main(int argc, char** argv)
{
    if (argc != 2) {
        printf("ERROR: Invalid Number of Arguments\n");
        exit(1);
    }
    
    const char* string = argv[1];


    return 0;
}
