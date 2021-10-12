//[BOJ] 2609번_최대공약수와 최소공배수
#include <stdio.h>

int main()
{
	int a, b;
	int i, N = 0;
	int tmp = 0;

	scanf("%d %d", &a, &b);

	if (0 > a || a > 10000 || 0 > b || b > 10000) {
		printf("자연수의 범위를 벗어났습니다.\n");
		return;
	}

	N = (a > b) ? b : a;
	for (i = 1; i <= N; i++)
	{
		if (a % i == 0 && b % i == 0) 
			tmp = i;
	}
	printf("%d\n", tmp);
	printf("%d\n", a * b / tmp);
	return 0;
}