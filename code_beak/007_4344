#include<stdio.h>

int main() {
	int c=0, n=0;
	scanf("%d", &c);

	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		int score[1000], sum = 0;
		double ave = 0.00;
		for (int j = 0; j <n; j++) {
			scanf("%d", &score[j]);
			sum += score[j];
		}

		ave =(double) sum / n;
		int count = 0;
		for (int j=0; j < n; j++) {
			if (score[j] > ave) count++;
		}
		printf("%.3f%%\n", (double)count/n*100);
	}
	return 0;
}
