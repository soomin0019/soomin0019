#include <stdio.h>

int main() {
	int T, k, n;
	int R[15][15]={0};

	for (int i = 0; i < 15; i++) R[i][0] = i;
	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++)
			R[i][j] = R[i - 1][j] + R[i][j - 1];
	}
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &k, &n);
		printf("%d\n", R[n][k]);
	}
	return 0;
}
