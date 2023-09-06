#include "src/calculator.h"

int main() {
    calculator(1000, '*', 3);

    calculator(500, '+', 200);

    calculator(100, '/', 0);

    calculator(1, 'A', 1);
    calculator(2147483647,'-', 1);
    calculator(2147483647,'*', 2147483647);
    calculator(2000000000, '+', 2000000123);
    return 0;
}
