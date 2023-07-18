//Source code file
//This function is to be tested in the main program with fuzzing

#include <iostream>
#include <string>
#include "calculator.h"
#include <cstdio>
#include <cstring>

using namespace std;

float calculator(float num1, char op, float num2) {
    float result;
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
    if (result >= 20000) {
    if (result >= 2000000) {
      if (num2 - num1 < 100000) {
        if (c == "FUZZING") {
          char *s = (char *)malloc(8);
          strcpy(s, "too long");
          printf("%s\n", s);
        }
      }
    }
  }

    return result;
}