//[BOJ] 1037번_약수
#include <iostream>
using namespace std;
int main()
{
	int N;
	int min=0, max=0;
	int val=0;

	cin >> N;
	int* A = new int[N];

	if(N>50) {
		cout << "N은 50보다 작거나 같아야 합니다." << endl;
		exit(1);
	}

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];

		if ((A[i]<2)||(A[i]>1000000)) {
			cout << "진짜 약수는 2보다 크거나 같고 1000000보다 작거나 같아야 합니다." << endl;
			exit(1);
		}
	}

	min = A[0];
	max = A[0];

	for (int i = 0; i < N; i++)
	{
		if (A[i] > max)
			max = A[i];
		if (A[i] < min)
			min = A[i];
	}

	val = min * max;
	cout << val << endl;
	return 0;
}