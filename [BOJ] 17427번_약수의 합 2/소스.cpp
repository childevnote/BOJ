////[BOJ] 17427번_약수의 합 2_시간 초과
//#include <iostream>
//using namespace std;
//int main()
//{
//	int N;
//	long long tot = 0;
//
//	cin >> N;
//	if ((N < 1) || (N > 1000000)) {
//		cout << "N의 범위를 벗어났습니다." << endl;
//		exit(1);
//	}
//
//	for (int i = 1; i <= N; i++) {
//		//i의 약수의 합을 구하는 알고리즘
//		for (int j = 1; j <= i; j++) {
//			if (i % j == 0) {
//				tot += j;
//			}
//		}
//	}
//
//	cout << tot << endl;
//	return 0;
//}

//[BOJ] 17427번_약수의 합 2
#include <iostream>
using namespace std;
int main()
{
	int N;
	long long tot = 0;

	cin >> N;
	if ((N < 1) || (N > 1000000)) {
		cout << "N의 범위를 벗어났습니다." << endl;
		exit(1);
	}

	for (int i = 1; i <= N; i++) 
		tot += (N / i) * i;

	cout << tot << endl;
	return 0;
}