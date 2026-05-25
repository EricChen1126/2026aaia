// week 14-4a.cpp

#include <stdio.h>

int main() {
    printf("Please input two integers(ex. 57 76): ");
    int a, b = 0;
    scanf("%d%d", &a, &b);
    int ans = 1;
    for (int k = 1; k <= a; k++) {
        if (a % k == 0 && b % k == 0) {
            ans = k;
        }
    }
    printf("gcd is:%d\n", ans);
    printf("%d / %d reduced fraction is %d / %d \n", a, b, a / ans, b / ans);
    return 0;
}
