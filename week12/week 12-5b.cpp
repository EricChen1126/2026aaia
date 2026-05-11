// week 12-5b.cpp

#include <stdio.h>

int main() {
    int N = 0;
    int ans = 0;
    scanf("%d", &N);
    
    for (int i = 1; i < N; i++) {
        ans += i * (i + 1);
    }
    printf("%d\n", ans);
    return 0;
}