#include <iostream>
using namespace std;

int main()
{
	int num[30] = {};

	for (int i = 0; i < 28; i++) {
		int n = 0;
		cin >> n;
		num[n - 1] = n;

	}

	for (int i = 0; i < 30; i++) {
		if (num[i] == 0) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}