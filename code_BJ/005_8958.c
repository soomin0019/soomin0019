#include<stdio.h>
#include<string.h>

int main() {
	int N;
	char arr[81];
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%s", arr);
		int sum = 0, add = 1;
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += add;
				add++;
			}
			else add = 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}
