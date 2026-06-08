// week 16-4b.cpp
#include <stdio.h>
int main() {
    int N, ans = 0;
    scanf("%d", &N);
    for (int i = 0; i <= N; i++) {
        ans += 2 * i + 1;
    }
    printf("f(%d)=%d", N, ans);
    return 0;
}