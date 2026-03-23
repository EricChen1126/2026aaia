// week 05-3a.cpp
#include <stdio.h>
int main () {
	int N = 0;
	scanf("%d", &N);
	if (N > 90) printf("A\n");
	else if (N > 80) printf("B\n");
	else if (N > 60) printf("C\n");
	else printf("F\n");
}
