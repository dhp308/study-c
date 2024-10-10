#include <iostream>
using namespace std;

int main()
{

	int realcount = 0;
	int nFair[10] = {};

	for (int i = 0; i < 10; i++) {
		int n = 0;
		cin >> n;
		nFair[i] = n % 42;
	}

	for (int i = 0; i < 42; i++) {
		int count = 0;
		for (int k = 0; k < 10; k++) {
			if (nFair[k] == i) {
				count++;
			}
		}

		if (count > 0) {
			realcount++;
		}
	}

	cout << realcount << endl;

	return 0;
}