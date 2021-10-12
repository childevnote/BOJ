//[BOJ] 4673¹ø_¼¿ÇÁ ³Ñ¹ö
#include<iostream>
#define N 10001
using namespace std;
bool arr[N];
int self_num(int num)
{	
	int sum = 0;
	sum += num;
	while (num)
	{
		sum += (num % 10);
		num /= 10;
	}

	return sum;
}

int main()
{
	for (int i = 1; i < N; i++)
	{
		int d = self_num(i);

		if (d <= N) {
			arr[d] = true;
		}
	}

	for (int i = 1; i < N; i++)
	{
		if (!arr[i])
			cout << i << endl;
	}

	return 0;
}