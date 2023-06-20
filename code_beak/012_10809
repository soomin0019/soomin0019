#include<stdio.h>
#include<string.h>

int main() {
	char arr[100] = { 0 };
	scanf("%s", arr);

	int a[26];
	for (int i = 0; i < 26; i++) {
		a[i] = -1;
	}

	for (int j = 0; j < strlen(arr); j++) {
		char alpa = arr[j];

		if (a[alpa - 'a'] == -1)
			a[alpa - 'a'] = j;
		else
			continue;
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", a[i]);
	}

	return 0;
}
