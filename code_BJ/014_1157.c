#include<stdio.h>
#include<string.h>

char word[1000000] = { 0 };
int vis[26] = { 0 };
int main() {
	char ans = 0;
	int max = 0,len;
	
	scanf("%s", word);
	len = strlen(word);

	for (int i = 0; i < len; i++) {
		if (word[i] >= 'a') {
			vis[word[i] - 'a']++;
		}
		else
			vis[word[i] - 'A']++;
	}

	for (int j = 0; j < 26; j++) {
		if (vis[j] > max) {
			max = vis[j];
			ans = j + 'A';
		}
		else if (vis[j] == max) {
			ans = '?';
		}
	}
	
	printf("%c", ans);
	return 0;
}
