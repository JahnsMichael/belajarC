#include <stdio.h>

int main() {
    // operator unary
    int a = 10;
    int b = ++a; // a = a+1 lalu b = a
    printf("a=%d b=%d\n", a, b);

    a = 10;
    int c = a++; // c = a lalu a = a+1
    printf("a=%d c=%d\n", a, c);

    // operator binary
    int d = b+c;
    printf("d=%d\n", d);

    // operator ternary
    char * karakter = (b<c)?"b":"c";
    printf("karakter=%c\n", *karakter);
}