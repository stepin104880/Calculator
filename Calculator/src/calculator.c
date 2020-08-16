#include "calculator.h"
#include <stdio.h>
 
int add(int a, int b) {
    return a + b;
}
 
int sub (int a, int b) {
    return a - b;
}
 
 
int calculator(int option, int a, int b) {
    int result = 0;
    int (*funct_ptr)(int, int);
    if (option == 0)
        funct_ptr = add;
    else if (option == 1)
        funct_ptr = sub;
    result = funct_ptr(a, b);
    return result;
}
