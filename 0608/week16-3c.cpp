// week 16-3c.cpp
#include <stdio.h>
int main() {
    int N, ans = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        ans += i * 11;
    }
    printf("%d", ans);
    return 0;
}