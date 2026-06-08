// week 15-4a.cpp
#include <stdio.h>
int main() {
    int K, total = 0;
    scanf("%d", &K);
    for (int i = 1; i < 1000; i++) {
        total += i;
        if (total > K) {
            printf("%d", i);
            break;
        }
    }
    return 0;
}