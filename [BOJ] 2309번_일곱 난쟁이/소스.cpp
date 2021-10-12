//[BOJ] 2309번_일곱 난쟁이
#include <iostream>
using namespace std;

int main()
{
	int length[10];
	int tot = 0;
	int index1 = 0;
	int index2 = 0;
	int temp = 0;

	for (int i = 0; i < 9; i++)
	{
		cin >> length[i];
		if (length[i] > 100)
		{
			cout << "난쟁이의 키는 100을 넘을 수 없습니다." << endl;
			break;
		}
	}

	cout << endl;

	for (int i = 0; i < 9; i++) {
		tot = tot + length[i];
	} //tot에 난쟁이들의 키를 다 더한 값을 저장한다.

	for (int a = 0; a < 9; a++)
	{
		for (int b = 0; b < 9; b++)
		{
			if (tot - (length[a] + length[b]) == 100)
			{
				index1 = a;
				index2 = b;
				break;
			}
		}
	} //모든 경우의 수를 돌며 난쟁이들의 키 총합에서 
	  //두 난쟁이의 키를 뺀 값이 100이 되는 시점의 인덱스를 저장한다.

	for (int i = index1; i < 9; i++)
	{
		length[i] = length[i + 1];
	} //index1번째부터 인덱스를 1 증가시켜 length[index1]을 삭제한다.

	for (int i = index2; i < 8; i++)
	{
		length[i] = length[i + 1];
	} //index2번째부터 인덱스를 1 증가시켜 length[index2]을 삭제한다.

	for (int x = 0; x < 6; x++)
	{
		for (int y = 0; y < 6 - x; y++)
		{
			if (length[y] > length[y + 1]) {
				temp = length[y];
				length[y] = length[y + 1];
				length[y + 1] = temp;
			}
		}
	} //length배열의 값을 오름차순으로 정렬한다.

	for (int i = 0; i < 7; i++)
	{
		cout << length[i] << endl;
	}
	cout << endl;
	return 0;
}