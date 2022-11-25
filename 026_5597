#include <string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int A[31] = {}, B[29] = {};

	for (int i = 1; i <= 30; i++)
	{
		A[i] = i;
	}
	for (int i = 0; i < 28; i++)
	{
		scanf("%d", &B[i]);
		A[B[i]] = 0;
	}
	for (int i = 1; i <= 30; i++)
	{
		if (A[i] != 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}
