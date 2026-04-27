/// week 10-4.cpp SWAP(a, b).
#include <stdio.h>

int main() {
    int a = 9;
    int b = 100;
    int temp = a;

    printf("a:%d b:%d\n", a, b);
    a = b;
    b = temp;
    
    printf("a:%d b:%d\n", a, b);
    return 0;
}
