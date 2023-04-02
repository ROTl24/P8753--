#include <stdio.h>


int main() {

	int n;
	int i = 0;
	int count = 0;
	scanf("%d", &n);
	for (i = 1; i <n  ; i++) {
		if (((i * i) % n) < (n / 2.0)) {
			count++;
		}
	}
	printf("%d\n", count);

	return 0;
}