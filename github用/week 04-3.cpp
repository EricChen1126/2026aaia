// week 04-3.cpp soit_base_010
#include <stdio.h>

int main () {
    int ans, now = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &now);
        if (now % 3 == 0) ans++;
    }
    printf("%d\n", ans);
}
