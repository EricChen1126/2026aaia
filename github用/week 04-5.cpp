// week 04-5.cpp soit106_base_005

#include <stdio.h>

int main () {
	int N, ans = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) ans++;
	}
	printf("%d\n", ans);

	return 0;
}
