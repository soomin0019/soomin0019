#include <stdio.h>

int main() {

	int X;
	scanf("%d", &X);

	int R = 1;
	while (1) {
		if (R * (R - 1) / 2 + 1 <= X && X <= R * (R + 1) / 2)
			break;
		R++;
	}

	int bunza, bunmo;
	if (R % 2 == 0) {
		bunza = X - (R - 1) * R / 2;
		bunmo = (R + 1) - bunza;
	}
	else {
		bunmo = X - (R - 1) * R / 2;
		bunza = (R + 1) - bunmo;
	}
	printf("%d/%d", bunza, bunmo);
	return 0;
}
