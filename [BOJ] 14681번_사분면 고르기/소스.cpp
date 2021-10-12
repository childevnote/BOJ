//[BOJ] 14681번_사분면 고르기
//test
#include <iostream>
using namespace std;
int main()
{
	int x, y, z;

	cin >> x >> y;

	if (x > 0 && y > 0)
		z = 1;
	else if (x > 0 && y < 0)
		z = 4;
	else if (x < 0 && y > 0)
		z = 2;
	else if (x < 0 && y <0)
		z = 3;
	else
	{
		cout << "x또는 y가 0입니다." << endl;
		exit(1);
	}

	cout << z << endl;
	return 0;
}