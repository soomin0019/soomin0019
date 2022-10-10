#include<stdio.h>

int main() {
	int A;
	scanf("%d", &A);

	if (A == 1)
		printf("1");
	else {
		int c = 0;
		while (1) {
			if (2 + 3 * c * (c + 1) <= A && A <= 1 + 3 * (c + 1) * (c + 2))
				break;
			c++;
		}
		printf("%d", c + 2);
	}
}
