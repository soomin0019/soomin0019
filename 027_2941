#include <stdio.h>
#include <string.h>

int main(){
	char A[100] = {};
	int sum;

	scanf("%s", &A);
	sum = strlen(A);

	for (int i = 0; i< strlen(A); i++) {
		if ((A[i] == 'l' || A[i] == 'n' )&& A[i + 1] == 'j') //우선순위가 있기 때문에 앞에서 먼저 묶어줘야한다
			sum--;
		if (A[i] == 'd' && A[i + 1] == 'z' && A[i + 2] == '=')
			sum --;
		if (A[i] == '=' || A[i] == '-')
			sum--;
	}

	printf("%d\n", sum);
	return 0;
}
