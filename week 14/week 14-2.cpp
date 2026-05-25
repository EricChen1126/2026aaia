// week 14-2.cpp

#include <stdio.h>

int f1(int x, int y) {
    printf("f1() func 吃到 parameter x:%d y:%d\n", x, y);
    x += 10;
    printf("f1() function 裡修改後 x:%d y:%d\n", x, y);
}

int main() {
    printf("Hello World\n");
    int x = 100, y = 200;
    printf("main() function裡,原本 x:%d y:%d\n", x, y);
    f1(x, y);
    printf("main() function裡,現在 x:%d y:%d\n", x, y);
    return 0;
}
