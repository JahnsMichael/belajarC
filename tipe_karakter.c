#include <stdio.h>

void main() {
    double someNumber = 2.12344567834567845678456784567894567894567;
    printf("%30lf\n", someNumber);      // width 30, precision default
    printf("%30.10lf\n", someNumber);   // width 30, precision 10
    printf("%30.20lf\n", someNumber);   // width 30, precision 20
}