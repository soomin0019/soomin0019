#include <stdio.h>

int main() {
	int T, H, W, N;
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);

		int X, Y; //X는 호수,Y는 층수
		if (N % H == 0) {
			X = N/H;
			Y = H;
		}
		else {
			X = N / H + 1;
			Y = N % H;
		}
		if (X >= 10)printf("%d%d\n", Y, X);
		else printf("%d0%d\n", Y, X);
	}
	return 0;
}
