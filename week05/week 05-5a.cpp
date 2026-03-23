// week 05-5a.cpp
#include <stdio.h>
int main () {
	int N = 0;
	scanf("%d", &N);
	for (int i = 2; i <= N; i += 2) {
		printf("%d ", i);
	}
}
