// week 04-4.cpp soit06_base_008

#include <stdio.h>

int main () {
    int a, b = 0;
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) printf("%d\n", i);
    }
    for (int i = b; i <= a; i++) {
        if (i % 5 == 0) printf("%d\n", i);
    }

}
