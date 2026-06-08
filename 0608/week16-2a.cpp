// week 16-2a.cpp
#include <stdio.h>
int main() {
    int N, now = 0;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i) {
        scanf("%d", &now);
        printf("%d,", now * now);
    }
    printf("\n");
    return 0;
}