#include <stdio.h>
#include <unistd.h>

void printGanjilGenap(int i) {
    if (i % 2 == 0) {
        printf("i = %d genap\n", i);
    } else {
        printf("i = %d ganjil\n", i);
    }
}

int main() {
    // LOOP
    // 1. FOR
    printf("FOR LOOP\n");
    for (int i = 0; i < 10; i++) {
        printGanjilGenap(i);
        // sleep(1);
    }

    // 2. WHILE
    printf("WHILE LOOP\n");
    int i = 0;
    while (i < 10) {
        printGanjilGenap(i);
        i++;
        // sleep(1);
    }

    // 3. DO WHILE
    printf("DO WHILE LOOP\n");
    i = 0;
    do {
        printGanjilGenap(i);
        i++;
        sleep(1);
    } while (i < 10);
}