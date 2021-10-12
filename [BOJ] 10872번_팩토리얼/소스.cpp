//[BOJ] 10872번_팩토리얼
#include <iostream>
using namespace std;
int main()
{
	int N;
	int F=1;

	cin >> N;

	if ((N < 0) || (N > 12)) {
		cout << "정수 N의 범위(0 ≤ N ≤ 12)에서 벗어났습니다." << endl;
		exit(1);
	}

	while (N) {
		F = F * N;
		N--;
	}

	cout << F << endl;
	return 0;
}