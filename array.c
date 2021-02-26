#include <stdio.h>

void printArr(int * arr) {
    for (int i = 0; i < sizeof(&arr)/sizeof(arr[0]); i++) {
        printf("i[%d] = %d\n", i, arr[i]);
    }
}

int main() {
    char namaSaya [10] = "Jahns";
    printf("Nama saya adalah %s\n", namaSaya);

    int arr [10] = {1, 10, 99, 7, 5};
    for (int i = 0; i < 10; i++) {
        printf("i[%d] = %d\n", i, arr[i]);
    }
    // printArr(arr);
}