#include<stdio.h>
#include<string.h>

int main() {
	char M[1000009] = { 0 };
	int cnt = 0;
	scanf("%[^\n]s", M);

	int len = strlen(M);
	for (int i = 0; i < len; i++) {
		if (M[i] == ' ') { //공백 전까지 문자로 인식
			if (len == 1) //공백 1만 입력했을 경우
				cnt = -1;
			else if (i != len - 1 && i != 0) 
				cnt++; //공백이 2개 있을 경우
		}
		
	}
	printf("%d", cnt + 1);

	return 0;
}
