// week 05-5b.cpp
#include <stdio.h>
int main () {
	int N, ans = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int now = 0;
		scanf("%d", &now);
		ans += now;
	}
	printf("%d\n", ans);
}
