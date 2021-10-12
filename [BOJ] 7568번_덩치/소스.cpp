//[BOJ] 7568번_덩치
#include <iostream>
using namespace std;
int main()
{
	int n;

	cin >> n;

	int** arr = new int* [n];

	for (int i = 0; i < n; i++) //2Xn 배열 생성
	{
		arr[i] = new int[2];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
			cin >> arr[i][j];
	}

	int* rate = new int[n]; //순위를 담을 배열 생성

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j += 2) //j를 두개씩 건너뛰어 몸무게와 키를 하나의 묶음으로 인식
		{
			rate[i] = 1; //순위는 각 덩치가 지날때마다 1로 초기화
			for (int k = 0; k < n; k++)
			{
				for (int l = 0; l < 2; l += 2)
				{
					if ((arr[i][j] < arr[k][l]) && (arr[i][j + 1] < arr[k][l + 1]))
						rate[i]++; //자신보다 큰 덩치가 있을 경우 순위를 1 증가
				}
			}
		}
	}

	for (int i = 0; i < n; i++) //순서대로 저장한 순위 출력
		cout << rate[i] << " ";

	return 0;
}