// week 16-3a.cpp
#include <stdio.h>
int main() {
    int N, ans = 0;
    scanf("%d", &N);
    for (int i = 1; i <= 1000; i++) {
        if (i * i == N)
            ans = i;
    }
    printf("%d", ans);
    return 0;
}