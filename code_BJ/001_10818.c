#include<stdio.h>
int arr[1000000];
int main() {
	int N;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	int min = arr[0], max = arr[0];
	for (int j = 0; j < N; j++) {
		if (arr[j] < min)
			min = arr[j];
		if (arr[j] > max)
			max = arr[j];
	}
	printf("%d %d", min, max);

	return 0;
}
