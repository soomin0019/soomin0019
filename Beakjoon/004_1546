#include<stdio.h>
int main() {
	int num, max=0;
	scanf("%d", &num);
	double ave = 0, result = 0;
	double arr[1005] = {};

	for (int i = 0; i < num; i++) {
		scanf("%lf", &arr[i]);
		if (max < arr[i])max = arr[i];
	}
	for (int j = 0; j < num; j++) {
		arr[j] = arr[j] / max * 100;
		ave += arr[j];
		result = ave / num;
	}
	printf("%lf", result);
	return 0;
}
