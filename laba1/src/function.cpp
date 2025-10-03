#include "../include/header.h"

int nod(int num_1, int num_2) {
    while (num_2 != 0) {
        int temporary_num = num_2;
        num_2 = num_1 % num_2;
        num_1 = temporary_num;
    }
    return num_1;
}
