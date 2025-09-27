#include "../include/header.h"

int nod(int num1, int num2) {
    while (num2 != 0) {
        int temporary_num = num2;
        num2 = num1 % num2;
        num1 = temporary_num;
    }
    return num1;
}