//Source code file
//This function is to be tested in the main program with fuzzing

#include <iostream>
#include <string>
#include "calculator.h"
#include <cstdio>
#include <cstring>

using namespace std;

int calculator(int num1, char op, int num2) {
    int result;
    string c = "FUZZING";
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            return 1;
    }

    return result;
}
