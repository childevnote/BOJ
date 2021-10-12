//[BOJ] 1934번_최소공배수
#include <stdio.h>

int main()
{
	int a, b;
	int i, N = 0;
	int tmp = 0;
	int t;

	scanf("%d", &t);

	if (t < 1 || t>1000)
	{
		printf("테스트 케이스의 개수가 벗어났습니다.");
		return;
	}

	while (t)
	{
		scanf("%d %d", &a, &b);
		if (0 > a || a > 45000 || 0 > b || b > 45000) {
			printf("자연수의 범위를 벗어났습니다.\n");
			return;
		}

		N = (a > b) ? b : a;
		for (i = 1; i <= N; i++)
		{
			if (a % i == 0 && b % i == 0)
				tmp = i;
		}
		printf("%d\n", a * b / tmp);
		t--;
	}
}