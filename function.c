#include <stdio.h>

int pangkatDua(int x) {
    return x*x;
}

void printPangkatDua(int x) {
    printf("Pangkat dua dari %d adalah %d\n", x, pangkatDua(x));
}

int main() {
    int x = 7;
    int xPangkat2 = pangkatDua(x);

    printPangkatDua(x);

    return 0;
}