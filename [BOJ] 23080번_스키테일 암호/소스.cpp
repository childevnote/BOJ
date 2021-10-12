//[BOJ] 23080번_스키테일 암호
#include <iostream>
#include <string.h>

using namespace std;
int main()
{
	char n[1000];
	int i, k;

	cin >> k;
	cin >> n;

	for (int i = 0; i < strlen(n); i += k)
		cout << n[i];

	return 0;
}