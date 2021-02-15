#include <stdio.h>

int someNumber = 10; // deklarasi global

int tambahSatu() {
    return someNumber + 1;
}

void main() {
    int someNumber = 11; // deklarasi lokal
    printf("someNumber = %d\n", someNumber);
    printf("someNumber tambahSatu = %d\n", tambahSatu());
}
